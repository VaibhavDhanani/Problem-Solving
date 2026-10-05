class Solution:
    def scoreOfParentheses(self, s: str) -> int:

        stack = [0]
        score = 0

        for ch in s:
            if ch == "(":
                stack.append(0)
            else:
                num = stack.pop()
                stack[-1] += max(2 * num, 1)

        return stack[0]
