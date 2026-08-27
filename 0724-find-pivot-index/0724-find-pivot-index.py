class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        l = 0
        r = 0
        total = 0
        pivot = -1
        n = len(nums)

        for i in nums:
            total += i

        for i in range(n):
            r = total - l - nums[i]

            if l == r:
                pivot = i
                break

            else:
                l += nums[i]

        return pivot