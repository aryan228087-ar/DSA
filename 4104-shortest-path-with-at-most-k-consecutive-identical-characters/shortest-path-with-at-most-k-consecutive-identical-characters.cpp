class Solution {
public:
    long long shortestPath(int n, vector<vector<int>>& edges,
                           string labels, int k) {

        vector<vector<pair<int,int>>> graph(n);

        for(auto edge : edges) {
            int u = edge[0];
            int v = edge[1];
            int w = edge[2];

            graph[u].push_back({v, w});
        }

        // dist[node][consecutive count]
        vector<vector<long long>> dist(n, vector<long long>(k + 1, LLONG_MAX));

        // {cost, node, consecutive}
        priority_queue<
            tuple<long long,int,int>,
            vector<tuple<long long,int,int>>,
            greater<tuple<long long,int,int>>
        > pq;

        dist[0][1] = 0;
        pq.push({0, 0, 1});

        while(!pq.empty()) {

            auto [cost, node, cnt] = pq.top();
            pq.pop();

            if(cost != dist[node][cnt])
                continue;

            if(node == n - 1)
                return cost;

            for(auto [next, weight] : graph[node]) {

                int newCnt;

                if(labels[next] == labels[node])
                    newCnt = cnt + 1;
                else
                    newCnt = 1;

                if(newCnt > k)
                    continue;

                long long newCost = cost + weight;

                if(newCost < dist[next][newCnt]) {
                    dist[next][newCnt] = newCost;

                    pq.push({
                        newCost,
                        next,
                        newCnt
                    });
                }
            }
        }

        return -1;
    }
};