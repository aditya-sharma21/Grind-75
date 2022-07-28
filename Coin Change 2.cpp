class Solution {
    int n;
    int dp[301][5001];
    int solve(vector<int>& a,int t,int size){
        if(t==0)return 1;
        if(size<0)return 0;
        
        if(dp[size][t] != -1)return dp[size][t];
        if(a[size] <= t)
            return dp[size][t]=solve(a,t-a[size],size)+solve(a,t,size-1); 
        else
            return dp[size][t]=solve(a,t,size-1); 
    }
public:
    int change(int t, vector<int>& a) {
        n=a.size();
        memset(dp,-1,sizeof(dp));
        return solve(a,t,n-1);
    }
};
