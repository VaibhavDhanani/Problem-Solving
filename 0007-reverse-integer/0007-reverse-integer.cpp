class Solution {
public:
    int reverse(int x) {
        int sign = 1;
        long ans=0;
        if(x<0)
        {
            sign=-1;
            if(x <= INT_MIN)
                return 0;
            x*=-1;
        }
        while(x > 0)
        {
            ans=ans*10 + x%10;
            x/=10;
            if(ans > INT_MAX)
            {
                return 0;
            }
        }
        return sign*ans;
    } 
};