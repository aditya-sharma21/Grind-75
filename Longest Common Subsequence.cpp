class Solution {
public:
    int dp[1001][1001];
    int helper(string &x, string &y, int m, int n){
        if(m==0 || n==0){
            return 0;
        }
        if(dp[m][n] != -1){
            return dp[m][n];
        }
        if(x[m-1]==y[n-1]){
            return dp[m][n] = 1 + helper(x,y,m-1,n-1);
        }
        else{
            return dp[m][n] = max(helper(x,y,m-1,n), helper(x,y,m,n-1));
        }
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        memset(dp, -1, sizeof(dp));
        return helper(text1, text2, text1.size(), text2.size());
    }
}
