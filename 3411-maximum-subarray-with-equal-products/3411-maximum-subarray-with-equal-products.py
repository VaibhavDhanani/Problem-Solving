class Solution:
    def maxLength(self, nums: List[int]) -> int:

        n = len(nums)
        ans = 1

        for i in range(n):
            for j in range(i+1,n):
                if reduce(mul, nums[i:j+1]) == lcm(*nums[i:j+1]) * gcd(*nums[i:j+1]):
                    ans = max(ans,j-i+1)

        return ans

        