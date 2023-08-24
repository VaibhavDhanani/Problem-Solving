class Solution {
private:
    int totalTrees(int n, int dp[]){
        if(n <= 1) return 1;
        if(dp[n]) return dp[n];
        
        for(int i=1; i<=n; i++){
            dp[n] += totalTrees(i-1,dp) * totalTrees(n-i,dp);
        }

        return dp[n];
    }
public:
    int numTrees(int n) {
        int dp[20] = {0};
        return totalTrees(n,dp);
    }
};