class Solution:
    def numPairsDivisibleBy60(self, time: List[int]) -> int:
        count = 0
        freq = defaultdict(int)

        for num in time:
            rem = num % 60
            count += freq[(60 - rem) % 60]
            freq[rem] += 1

        return count