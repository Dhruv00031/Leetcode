class Solution {
public:
    bool checkDivisibility(int n) {
        int dig = 0;
        int pro = 1;
        for(auto x : to_string(n)){
            dig += x - '0';
            pro *= x - '0';
        }
        if(n % (dig + pro) == 0){
            return true;
        }
        return false;
    }
};