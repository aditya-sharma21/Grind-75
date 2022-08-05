class Solution {
public:
    
    vector<int> dp ;
    
    int rec(vector<int>&a , int b ){
        int n = a.size() ;
        if(b < 0 ) return INT_MIN ;
        if(b == 0) return 1 ;
        int ans = 0 ;
        if(dp[b] > 0) return dp[b] ;
        else if(dp[b] != -1) return dp[b] ;
        
        for(int i = 0 ; i < n ; i++){
            int x = rec(a , b-a[i]) ;
            if(x > 0) ans += x ;
        }
        dp[b] = ans ;
        return ans ;
    }
    
    int combinationSum4(vector<int>& a , int b) {
        dp.resize(b+1 , -1) ;
        return rec(a , b) ;
    }
};
