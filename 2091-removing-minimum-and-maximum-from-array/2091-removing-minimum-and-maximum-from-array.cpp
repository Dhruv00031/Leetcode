class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        if(nums.size() == 1) return 1;

        int before1 = 0, after1 = 0;
        int before2 = 0, after2 = 0;
        int n = nums.size();

        int maxm = *max_element(nums.begin(), nums.end());
        int minm = *min_element(nums.begin(), nums.end());

        for(int i = 0; i < n; i++){
            if(nums[i] == maxm){
                before1 = i;
                after1 = n - i - 1;
            }

            if(nums[i] == minm){
                before2 = i;
                after2 = n - i - 1;
            }
        }

        //Both from left
        int option1 = max(before1, before2) + 1;

        //Both from right
        int option2 = max(after1, after2) + 1;

        //One each side
        int option3 = min(before1, before2) + 1 + min(after1, after2) + 1;

        return min({option1, option2, option3});
    }
};