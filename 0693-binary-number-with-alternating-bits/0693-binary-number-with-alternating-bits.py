class Solution:
    def hasAlternatingBits(self, n: int) -> bool:
        binary_number = bin(n)
        for i in range(1,len(binary_number)):
            if binary_number[i-1] == binary_number[i]:
                return False

        return True
        