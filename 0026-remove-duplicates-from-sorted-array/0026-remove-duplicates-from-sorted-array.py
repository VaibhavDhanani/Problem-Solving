class Solution:
    def removeDuplicates(self, nums: list[int]) -> int:

        k = 0
        n = len(nums)
        j = 0
        while j < n:
            if nums[k]!=nums[j]:
                k+=1
                nums[k] = nums[j]
            j+=1
        
        return k+1