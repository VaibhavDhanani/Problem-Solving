class Solution:
    def minMoves(self, nums: List[int]) -> int:
        max_ele = max(nums)
        sum=0
        for num in nums:
            sum+=max_ele-num
        return sum