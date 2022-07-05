class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans(temperatures.size());
        stack<pair<int,int>> s1;
        
        for(int i=0; i<temperatures.size(); i++){
            if(s1.empty() || s1.top().first>temperatures[i]){
                s1.push({temperatures[i],i});
            }
            else{
                while(!s1.empty() && s1.top().first<temperatures[i]){
                    ans[s1.top().second] = i-s1.top().second;
                    s1.pop();
                }
                s1.push({temperatures[i],i});
            }
        }
        
        while(s1.empty()){
            ans[s1.top().second] = 0;
        }
        
        return ans;
    }
};
