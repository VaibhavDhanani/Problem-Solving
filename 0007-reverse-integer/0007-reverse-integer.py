class Solution:
    def reverse(self, x: int) -> int:

        reverse = str(x)[::-1]
        if x < 0:
            r_int = int(reverse[:-1])
            if -1*r_int < -2**31:
                return 0
            else:
                return -1*r_int
        else:
            r_int = int(reverse)
            return r_int if r_int < (2**31)-1 else 0
        