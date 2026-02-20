class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1)
            return x;
        double n1 = x;
        double n2 = (n1 + x / n1) / 2;
        double e = 0.001;
        while (abs(n2 - n1) >= e) {
            n1 = n2;
            n2 = (n1 + x / n1) / 2;
        }

        return int(n2);
    }
};