class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int score = 0;

        for(int i = 0; i < nums.size(); i++){

            int mxm = INT_MIN;
            int mnm = INT_MAX;

            for(int j = 0; j < i + 1; j++){
                if(nums[j] > mxm){
                    mxm = nums[j];
                }
            }
            for(int j = i; j < nums.size(); j++){
                if(nums[j] < mnm){
                    mnm = nums[j];
                }
            }
            score = mxm - mnm;
            
            if(score <= k){
                return i;
            }
            
        }
        return -1;
    }
};