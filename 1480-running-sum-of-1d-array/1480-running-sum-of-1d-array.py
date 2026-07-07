class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        current_sum = 0
        size = len(nums)
        result = [0] * size
        for i in range(size):
            current_sum+=nums[i]
            result[i] = current_sum

        return result
