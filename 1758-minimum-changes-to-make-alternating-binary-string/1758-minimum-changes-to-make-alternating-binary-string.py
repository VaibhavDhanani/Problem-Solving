class Solution:
    def minOperations(self, s: str) -> int:
        count1 = 0
        count2 = 0

        for i in range(len(s)):
            if s[i] != str(i % 2):
                count1 += 1
            
            if s[i] != str((i + 1) % 2):
                count2 += 1

        return min(count1, count2)