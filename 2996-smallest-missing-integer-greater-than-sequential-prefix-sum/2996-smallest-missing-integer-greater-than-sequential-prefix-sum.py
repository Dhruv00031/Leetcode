class Solution:
    def missingInteger(self, nums: List[int]) -> int:
        total = nums[0]
        i = 0

        while i + 1 < len(nums) and nums[i + 1] == nums[i] + 1:
            i += 1
            total += nums[i]

        biggest = total

        while biggest in nums:
            biggest += 1

        return biggest