class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int ansIdx = 0;
        int n = chars.size();

        while(i < n){
            int j = i + 1;
            while(j < n && chars[i] == chars[j]){
                j++;
            }
            //yaha tab hee aayege ya toh poora traverse krle ya fir new character encounter hoga

            //old character store
            chars[ansIdx++] = chars[i];
            int cnt = j - i;
            if(cnt > 1){
                //convert cnting into single digit
                string count = to_string(cnt);
                for(char ch : count){
                    chars[ansIdx++] = ch; 
                }
            }
            i = j;
        }
        return ansIdx;
    }
};