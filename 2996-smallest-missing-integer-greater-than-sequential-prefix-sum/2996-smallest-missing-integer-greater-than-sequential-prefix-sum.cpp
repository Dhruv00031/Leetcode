class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int biggest = nums[0];
        int total = 0;

        int i = 0;
        while(i + 1 < nums.size() && nums[i + 1] == nums[i] + 1){
            biggest += nums[i + 1];
            i++;
        }
        total = biggest;

        unordered_set<int> st(nums.begin(), nums.end());

        while(st.count(total)){
            total++;
        }
        return total;
    }
};