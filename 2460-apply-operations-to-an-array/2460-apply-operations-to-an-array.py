class Solution:
    def applyOperations(self, nums: List[int]) -> List[int]:
        w = 0
        n = len(nums)
        #merge
        for i in range(n-1):
            if nums[i] == nums[i + 1]:
                nums[i] *= 2
                nums[i+1] = 0
        for i in range(n):
            if nums[i] != 0:
                nums[i],nums[w] = nums[w], nums[i]
                w += 1
        return nums
