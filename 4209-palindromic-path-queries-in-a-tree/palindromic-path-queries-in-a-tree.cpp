class Solution {
public:
    vector<bool> palindromePath(int n, vector<vector<int>>& edges,
                                string s, vector<string>& queries) {

        // Build graph
        vector<vector<int>> graph(n);

        for(auto edge : edges) {
            int u = edge[0];
            int v = edge[1];

            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        // LCA preprocessing
        int LOG = 18;

        vector<vector<int>> parent(LOG, vector<int>(n, -1));
        vector<int> depth(n, 0);
        vector<int> tin(n);
        vector<int> tout(n);

        int timer = 0;

        function<void(int, int)> dfs = [&](int node, int par) {
            tin[node] = timer++;
            parent[0][node] = par;

            for(int nei : graph[node]) {
                if(nei == par)
                    continue;

                depth[nei] = depth[node] + 1;
                dfs(nei, node);
            }

            tout[node] = timer - 1;
        };

        dfs(0, -1);

        // Binary lifting table
        for(int k = 1; k < LOG; k++) {
            for(int i = 0; i < n; i++) {

                int p = parent[k - 1][i];

                if(p != -1)
                    parent[k][i] = parent[k - 1][p];
            }
        }

        // LCA function
        auto lca = [&](int u, int v) {
            if(depth[u] < depth[v])
                swap(u, v);

            // Bring u to same depth as v
            int diff = depth[u] - depth[v];

            for(int k = 0; k < LOG; k++) {
                if(diff & (1 << k))
                    u = parent[k][u];
            }

            if(u == v)
                return u;

            // Move both upwards
            for(int k = LOG - 1; k >= 0; k--) {
                if(parent[k][u] != parent[k][v]) {
                    u = parent[k][u];
                    v = parent[k][v];
                }
            }

            return parent[0][u];
        };

        // Fenwick Tree
        vector<int> fenwick(n + 1, 0);

        auto fenwick_add = [&](int i, int val) {
            i++;

            while(i <= n) {
                fenwick[i] ^= val;
                i += i & -i;
            }
        };

        auto fenwick_prefix = [&](int i) {
            int res = 0;
            i++;

            while(i > 0) {
                res ^= fenwick[i];
                i -= i & -i;
            }

            return res;
        };

        // Convert character to bit mask
        auto char_mask = [&](char c) {
            return 1 << (c - 'a');
        };

        // Initialize Fenwick tree
        string labels = s;

        for(int u = 0; u < n; u++) {
            int mask = char_mask(labels[u]);

            fenwick_add(tin[u], mask);
            fenwick_add(tout[u] + 1, mask);
        }

        // Process queries
        vector<bool> answers;

        for(string q : queries) {

            stringstream ss(q);

            string type;
            ss >> type;

            if(type == "update") {

                int u;
                char new_char;

                ss >> u >> new_char;

                int delta = char_mask(labels[u]) ^ char_mask(new_char);

                labels[u] = new_char;

                fenwick_add(tin[u], delta);
                fenwick_add(tout[u] + 1, delta);

            }
            else {

                int u, v;
                ss >> u >> v;

                int w = lca(u, v);

                int path_mask =
                    fenwick_prefix(tin[u])
                    ^ fenwick_prefix(tin[v])
                    ^ char_mask(labels[w]);

                // At most one character can have odd frequency
                bool possible =
                    path_mask == 0 ||
                    (path_mask & (path_mask - 1)) == 0;

                answers.push_back(possible);
            }
        }

        return answers;
    }
};