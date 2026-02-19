class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:

        min_length = min([len(word) for word in strs])
        result = ""
        for i in range(min_length):
            char = strs[0][i]
            for word in strs:
                if char != word[i]:
                    return result

            result+=char

        return result


        