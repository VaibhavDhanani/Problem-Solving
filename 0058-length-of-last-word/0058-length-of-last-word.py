class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        word_arr = s.strip().split(" ")

        return len(word_arr[-1])
        