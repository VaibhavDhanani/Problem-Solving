class Solution:
    def minMoves2(self, nums: list[int]) -> int:

        nums.sort()
        nums_size = len(nums)
        if nums_size % 2 == 1:
            mid = nums_size // 2
            sum_1 = 0
            for num in nums:
                sum_1 += abs(nums[mid] - num)
            return sum_1
        else:
            mid_1 = nums_size // 2
            mid_2 = nums_size // 2 - 1

            sum_1, sum_2 = 0, 0
            for num in nums:
                sum_1 += abs(nums[mid_1] - num)
                sum_2 += abs(nums[mid_2] - num)
            return min(sum_1, sum_2)
