class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(),s.end());
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                continue;
            }
            int j=i;
            while( j < s.size() && s[j++]!=' ')
            count++;
            break;
        }
        return count;
    }
};