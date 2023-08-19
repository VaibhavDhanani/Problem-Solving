class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map <char,int> mp;
        for(int i=0;i< sentence.size();i++)
        {
            mp[sentence[i]]++;
        }
        int i=0;
        while(i<26)
        {
            if(mp['a'+i]==0)
            {
                return false;
            }
            i++;
        }
        return true;
    }
};