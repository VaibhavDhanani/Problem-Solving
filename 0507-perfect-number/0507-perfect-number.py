class Solution:
    def checkPerfectNumber(self, num: int) -> bool:
        if num <=1:
            return False

        divisors = set()
        for i in range(1, 1 + int(math.sqrt(num))):
            if num % i == 0:
                divisors.add(i)
                divisors.add(num // i)

        divisors.remove(num)
        return sum(divisors) == num

        