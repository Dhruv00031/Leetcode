class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {

        if(s.size() < k) {
            return "";
        }

        vector<string> ans;

        for(int i = 0; i < s.size(); i++) {

            string m = "";
            int count = 0;
            int j = i;

            while(j < s.size() && count < k) {

                if(s[j] == '1') {
                    count++;
                }

                m += s[j];
                j++;
            }

            if(count == k) {
                ans.push_back(m);
            }
        }

        if(ans.empty()) {
            return "";
        }

        sort(ans.begin(), ans.end(), [](string a, string b) {

            if(a.size() != b.size()) {
                return a.size() < b.size();
            }

            return a < b;
        });

        return ans[0];
    }
};