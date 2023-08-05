class Solution {
public:
    bool isHappy(int n) {
        unsigned long long sum=0;
        while(1)
        {
            do{
                sum=sum + (n%10)*(n%10);
                n/=10;
            }while(n!=0);
            if(sum==1)
            {
                return true;
            }
            if(sum < 7)
            { 
                return false;
            }
            n=sum;
            sum=0;
        }
    }
};