class Solution {
public:
    string lexGreaterPermutation(string s, string target) {
        int n = s.size();
        int cnt[26] = {};

        for (char c : s) {
            cnt[c - 'a']++;
        }

        for (int i = n - 1; i >= 0; i--) {

            // Try to keep target[0...i-1] same
            int temp[26];
            for (int j = 0; j < 26; j++)
                temp[j] = cnt[j];

            bool possible = true;

            for (int j = 0; j < i; j++) {
                temp[target[j] - 'a']--;

                if (temp[target[j] - 'a'] < 0) {
                    possible = false;
                    break;
                }
            }

            if (!possible)
                continue;

            // At position i, find smallest character > target[i]
            for (int c = target[i] - 'a' + 1; c < 26; c++) {
                if (temp[c] > 0) {
                    string ans = target.substr(0, i);
                    ans += char('a' + c);

                    temp[c]--;

                    // Put remaining characters in sorted order
                    for (int j = 0; j < 26; j++) {
                        while (temp[j] > 0) {
                            ans += char('a' + j);
                            temp[j]--;
                        }
                    }

                    return ans;
                }
            }
        }

        return "";
    }
};