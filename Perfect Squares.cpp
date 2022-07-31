class Solution {
public:
    int helper(int n, vector<int> &dp)
    {
        if(n < 0) return INT_MAX;
        if(n == 0) return 0;
    
        int count = 1;
        int ans = INT_MAX;
        if(dp[n] != -1)
        {
            return dp[n];
        }
    
        while(count*count <= n)
        {
            ans = min(ans,helper(n-(count*count), dp));
            count++;
        }
        
        if(ans == INT_MAX)
        {
            dp[n] = INT_MAX;
            return INT_MAX;
        }
        
        dp[n] = ans+1;
        return ans+1;
    }
    
    int numSquares(int n) {
        vector<int> dp(n+1,-1);
        return helper(n, dp);
    }
};
