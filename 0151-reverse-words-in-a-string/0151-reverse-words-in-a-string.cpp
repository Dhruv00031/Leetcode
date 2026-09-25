class Solution {
public:
    string reverseWords(string s) {
        vector<string> store;
        int n = s.size();
        string ans = "";
        for (int i = 0; i < n; i++) {
            if (s[i] == ' ') {
                if (!ans.empty()) {
                    store.push_back(ans);
                    ans = "";
                }

            } else {
                ans += s[i];
            }
        }
        if (!ans.empty()) {
            store.push_back(ans);
        }
        string res = "";
        for (int i = store.size() - 1; i >= 0; i--) {
            res += store[i];
            if (i != 0) {
                res += " ";
            }
        }
        return res;
    }
};