class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();

        vector<int> sorted = nums;
        sort(sorted.begin(), sorted.end());

        for(int k = 0; k < n; k++) {

            vector<int> temp(n);

            for(int i = 0; i < n; i++) {
                temp[(i + k) % n] = sorted[i];
            }

            if(temp == nums) {
                return true;
            }
        }

        return false;
    }
};