class Solution {
public:
    long int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) {
        return INT_MAX;
        }
        long int ans=dividend/divisor;
        return ans;
    }
};