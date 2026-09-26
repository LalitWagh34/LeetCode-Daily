class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string, string> mp;
        for (const auto& pair : knowledge) {
            mp[pair[0]] = pair[1];
        }

        string ans = "";
        int m = s.size();
        int start = -1;

        for (int i = 0; i < m; i++) {
            if (s[i] == '(') {
                start = i;
            } else if (s[i] == ')') {
                string key = s.substr(start + 1, i - start - 1);
                auto it = mp.find(key);
                if (it != mp.end()) {
                    ans += it->second;
                } else {
                    ans += '?';
                }
                start = -1;
            } else if (start == -1) {
                ans += s[i];
            }
        }

        return ans;
    }
};