class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int r = 0;
        int pivot = -1;
        int total = 0;

        for(int i = 0; i < n; i++){
            total += nums[i];
        }

        for(int i = 0; i < n; i++){
            r = total - l - nums[i];
            if(l == r){
                pivot = i;
                break;
            }
            l += nums[i];
        }
        return pivot;
    }
};