class Solution {
    
    int maxProfitUtil(int ind, int buy, int n, vector<int>& prices, vector<vector<int>> &dp ){

        if(ind>=n) return 0;

        if(dp[ind][buy]!=-1) return dp[ind][buy];

        int profit;

       
        if(buy==0){
            
            int buyStock = -prices[ind] + maxProfitUtil(ind+1, 1, n, prices, dp);
            int notbuyStock = 0 + maxProfitUtil(ind+1, 0, n, prices, dp);
                
            profit = max(buyStock, notbuyStock);
        }

        if(buy==1){
            int sellStock = prices[ind] + maxProfitUtil(ind+2, 0, n, prices, dp);
            int notsellStock = 0 + maxProfitUtil(ind+1, 1, n, prices, dp);
                
            profit = max(sellStock, notsellStock);
        }

        return dp[ind][buy] = profit;
}
    
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        
        if(n<=1) return 0;
        
        vector<vector<int>> dp(n,vector<int>(2,-1));
    
        int ans = maxProfitUtil(0, 0, n, prices, dp);
        return ans;
    }
};
