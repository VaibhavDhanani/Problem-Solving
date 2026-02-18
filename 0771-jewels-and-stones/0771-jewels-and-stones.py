class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        total_jewels = 0
        for jewel in jewels:
            for stone in stones:
                if stone == jewel:
                    total_jewels+=1

        return total_jewels
        