class Solution:
    def maxFreqSum(self, s: str) -> int:
        max_freq_vowel = 0
        max_freq_consonant = 0

        freq_dict = defaultdict(int)
        for char in s:
            freq_dict[char] +=1 

        vowels = ["a","e","i","o","u"]
        for char in s:
            if char in vowels:
                max_freq_vowel = max(max_freq_vowel,freq_dict[char])
            else:
                max_freq_consonant = max(max_freq_consonant,freq_dict[char])

        return max_freq_vowel+max_freq_consonant