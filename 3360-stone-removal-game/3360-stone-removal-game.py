class Solution:
    def canAliceWin(self, n: int) -> bool:
        if n < 10:
            return False
        alice_turn = True
        k = 10
        n -= k
        k -= 1
        while n >= 0:
            if n >=k:
                alice_turn = not alice_turn
                n -= k
                k -= 1
            else:
                break

        return alice_turn
