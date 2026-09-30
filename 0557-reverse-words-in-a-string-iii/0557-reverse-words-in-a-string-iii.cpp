class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int st = 0;
        int e = n - 1;
        for(int i = 0; i <= n; i++){
            if(i == n || s[i] == ' '){
                e = i - 1;
                while(st < e){
                    swap(s[st], s[e]);
                    st++;
                    e--;
                }
                st = i + 1;
            }
        }
        return s;
    }
};