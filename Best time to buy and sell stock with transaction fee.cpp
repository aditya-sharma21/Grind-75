class Solution {
private:
    int solve(vector<int> &prices,vector<vector<int>> &dp,int idx,int buy,int fee,int n){
        if(idx == n){
            return 0;
        }
        
        
        if(dp[idx][buy] != -1){
            return dp[idx][buy];
        }
        
        if(buy){
            int take = -prices[idx] + solve(prices,dp,idx+1,0,fee,n);
            
            int notTake = 0 + solve(prices,dp,idx+1,1,fee,n);
            
            dp[idx][buy] = max(take,notTake);
        }
        else{
            int sell = prices[idx] + solve(prices,dp,idx+1,1,fee,n) - fee; 
            int notSell = 0 + solve(prices,dp,idx+1,0,fee,n);
            
            dp[idx][buy] = max(sell,notSell);
        }
        
        return dp[idx][buy];
    }
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        
        vector<vector<int>> dp(n,vector<int>(2,-1));
        
        return solve(prices,dp,0,1,fee,n);
    }
};
