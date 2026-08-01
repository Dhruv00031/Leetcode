class Solution {
public:

    int solve(vector<int>& nums, int left, int right, bool player1) {

        if (left > right)
            return 0;

        if (player1) {

            int takeLeft = nums[left] + solve(nums, left + 1, right, false);
            int takeRight = nums[right] + solve(nums, left, right - 1, false);

            return max(takeLeft, takeRight);
        }
        else {

            int takeLeft = solve(nums, left + 1, right, true);
            int takeRight = solve(nums, left, right - 1, true);

            return min(takeLeft, takeRight);
        }
    }

    bool predictTheWinner(vector<int>& nums) {

        int total = 0;

        for (int x : nums)
            total += x;

        int player1 = solve(nums, 0, nums.size() - 1, true);
        int player2 = total - player1;

        return player1 >= player2;
    }
};