class Solution {
public:
    int reverseDegree(string s) {
        int ans = 0;
        for(int i = 0; i < s.size(); i++){
            char ch = s[i];
            int val = 26 - (ch - 'a');
            int pos = i + 1;
            ans += val * pos;
        }
        return ans;
    }
};