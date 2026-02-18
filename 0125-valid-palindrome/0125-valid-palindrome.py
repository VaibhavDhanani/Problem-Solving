class Solution:
    def isPalindrome(self, s: str) -> bool:
        
        phrase = "".join(char.lower() for char in s if char.isalnum())

        start,end = 0,len(phrase)-1
        while start < end :
            if phrase[start]==phrase[end]:
                start+=1
                end-=1
            else:
                return False

        return True
