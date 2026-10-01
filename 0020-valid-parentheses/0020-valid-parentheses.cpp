class Solution {
public:
    bool isValid(string& str) {
        if (str.size() % 2){
            return false;
        }
        int j = 0; 
        for (char i : str) {
            if ((i & 3) != 1) {
                str[j++] = i;
            } 
            else if (j == 0 || ((i - str[--j] + 1) >> 1) != 1) {
                return false;
            }
        }
        return j == 0;
    }
};