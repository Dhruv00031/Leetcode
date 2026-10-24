class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false; 
        unsigned int reversed = 0;
        unsigned int original = x;
        while (x != 0) {
           unsigned int digit = x % 10;
            reversed = reversed * 10 + digit;
            x /= 10;
        }
        return original == reversed;
    }
};