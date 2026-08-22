class Solution {
public:
    bool checkDivisibility(int n) {
        int dig = 0;
        int pro = 1;
        int temp = n;
        while(temp != 0){
            int digit = temp % 10;

            dig += digit;
            pro *= digit;
            temp /= 10; 
        }
        int ans = pro + dig;
        if(n % ans == 0){
            return true;
        }
        return false;
    }
};