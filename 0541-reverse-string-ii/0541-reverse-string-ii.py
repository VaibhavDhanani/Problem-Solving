class Solution:
    def reverseStr(self, s: str, k: int) -> str:
        i, n = 0, len(s)
        s_arr = list(s)

        while i < n:
            start = i
            end = min(i + k - 1, n - 1)

            while start < end:
                s_arr[start], s_arr[end] = s_arr[end], s_arr[start]
                start += 1
                end -= 1

            i += 2 * k

        return "".join(s_arr)
