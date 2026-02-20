class Solution:
    def makeLargestSpecial(self, s: str) -> str:
        count = 0
        i = 0
        specials = []
        start = 0
        
        for j, c in enumerate(s):
            if c == '1':
                count += 1
            else:
                count -= 1
            
            if count == 0:
                inner = self.makeLargestSpecial(s[start+1:j])
                # print(inner)
                specials.append('1' + inner + '0')
                start = j + 1
        

        specials.sort(reverse=True)
        return ''.join(specials)