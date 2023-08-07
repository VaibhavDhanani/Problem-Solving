class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        int i = 0;
        int sign = 1;
        long long int ans = 0;
        while (i < n && s[i] == ' ') {
            i++;
        }
        if (i < n && s[i] == '-' || s[i]=='+') {
            if(s[i]=='-')
            {
                sign=-1;
            }
            i++;
        }
        while (i < n && s[i] >= '0' && s[i] <= '9') {
            int digit = s[i] - '0';
            ans = ans * 10 + digit;
            if (ans > INT_MAX && sign == 1) {
                return INT_MAX;
            } else if (ans > INT_MAX && sign == -1) {
                return INT_MIN;
            }
            i++;
        }

        return sign * ans;
    }
};
