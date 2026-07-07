class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        size = len(nums)
        prefix_sum_list = [0] * size
        suffix_sum_list = [0] * size
        prefix_sum = 0
        suffix_sum = 0

        for i in range(size):
            prefix_sum += nums[i]
            suffix_sum += nums[size - i - 1]
            prefix_sum_list[i] = prefix_sum
            suffix_sum_list[size - i - 1] = suffix_sum

        for i in range(size):
            if prefix_sum_list[i] == suffix_sum_list[i]:
                return i

        return -1
