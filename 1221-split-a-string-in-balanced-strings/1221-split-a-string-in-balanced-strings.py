class Solution:
    def balancedStringSplit(self, s: str) -> int:
        balanced_string_count = 0

        l_char,r_char = 0,0

        for char in s:
            if char == "L":
                l_char+=1
            else:
                r_char+=1

            if l_char == r_char:
                balanced_string_count+=1
                l_char,r_char = 0,0

        return balanced_string_count
        