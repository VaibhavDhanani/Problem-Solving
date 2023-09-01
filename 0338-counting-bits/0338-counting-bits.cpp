class Solution {
public:

    int count1(int i)
    {
        int count=0;
        while(i!=0)
        {
            count+=i%2;
            i/=2;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> v;
        for(int i=0;i<=n;i++)
        {
            v.push_back(count1(i));
        }
        return v;
    }
};