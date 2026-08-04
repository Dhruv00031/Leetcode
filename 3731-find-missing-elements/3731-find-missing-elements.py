class Solution:
    def findMissingElements(self, nums: List[int]) -> List[int]:
        n = len(nums)
        nums.sort()
        list1 = []
        for i in range(nums[0], nums[n - 1] + 1):
            if i not in nums:
                list1.append(i)
        return list1