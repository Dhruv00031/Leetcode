class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        int maxm = max_element(nums.begin(), nums.end()) - nums.begin();
        int minm = min_element(nums.begin(), nums.end()) - nums.begin();

        int left = min(maxm, minm);
        int right = max(maxm, minm);

        int bothLeft = right + 1;
        int bothRight = n - left;
        int bothSides = left + 1 + n - right;

        return min({bothLeft, bothRight, bothSides});
    }
};