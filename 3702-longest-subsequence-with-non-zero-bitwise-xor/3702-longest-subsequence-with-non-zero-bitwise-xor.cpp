class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int zeroCnt = 0;
        int zor = 0;
        int n = nums.size();
        for(int x : nums){
            zor ^= x;
            if(x == 0){
                zeroCnt++;
            }
        }
        if(zeroCnt == n) return 0;
        if(zor != 0) return n;
        return n - 1;
    }
};