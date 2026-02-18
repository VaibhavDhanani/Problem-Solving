class Solution:
    def findWordsContaining(self, words: List[str], x: str) -> List[int]:
        result_arr = []
        for i in range(len(words)):
            if x in words[i]:
                result_arr.append(i)

        return result_arr
        