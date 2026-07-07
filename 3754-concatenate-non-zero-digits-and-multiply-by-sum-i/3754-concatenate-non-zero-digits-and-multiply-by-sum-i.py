class Solution:
    def sumAndMultiply(self, n: int) -> int:
        num_str = str(n)
        new_num = ""
        num_sum = 0
        for char in num_str:
            if char == "0":
                continue
            new_num+=char
            num_sum+=int(char)

        if not new_num:
            return 0

        return int(new_num)*num_sum
        