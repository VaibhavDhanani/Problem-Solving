class Solution:
    def hasAllCodes(self, s: str, k: int) -> bool:
        
        substrings = {s[i:i+k] for i in range(len(s) - k + 1)}
        return len(substrings) == 2**k
        