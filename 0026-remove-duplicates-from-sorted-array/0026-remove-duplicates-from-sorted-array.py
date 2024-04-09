class Solution(object):
    def removeDuplicates(self, nums):
        nums[:]=set(nums)
        nums.sort()
        return len(nums)