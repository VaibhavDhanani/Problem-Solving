class Solution {
public:
    string predictPartyVictory(string senate) {
        unordered_map<char,int> mp;
        for(int i=0;i<senate.size();i++)
        {
            mp[senate[i]]++;
        }
        while(senate.size()!=1)
        {
            if(senate[0]=='R')
            {
                mp['D']--;
                size_t pos = senate.find('D');
                if (pos != string::npos) {
                    senate.erase(pos, 1);
                    senate+="R";
                    senate.erase(0,1);
                }
                else
                {
                    return "Radiant";
                }
            } 
            else
            {
                mp['R']--;
                size_t pos = senate.find('R');
                if (pos != string::npos) {
                    senate.erase(pos, 1);
                    senate+="D";
                    senate.erase(0,1);
                }
                else
                {
                    return "Dire";
                }
            }  
            if(mp['R']==0 || mp['D']==0)
                break;
        }
        if(mp['R'] > 0)
        {
            return "Radiant";
        }
        else
        {
            return "Dire";
        }
    }
};