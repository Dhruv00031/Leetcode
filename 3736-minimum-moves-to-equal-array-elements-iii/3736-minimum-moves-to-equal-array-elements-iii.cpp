class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mxm = *max_element(nums.begin(), nums.end());
        int moves = 0;
        for(int x : nums){
            moves += mxm - x;
            if(x == mxm){
                continue;
            }
        }
        return moves;
    }
};