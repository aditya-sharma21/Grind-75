class Solution {
public:
  
    vector<string> topKFrequent(vector<string>& words, int k) {
        int n = words.size();
        int i;
        unordered_map<string,int>mp;
        for(i=0;i<n;i++)
        {
            mp[words[i]]++;
        }
        vector<string>ans;
        vector<pair<int,string>>v;
        for(auto it : mp)
        {   
            v.push_back( make_pair(-1*it.second,it.first));
            
        }
        sort(v.begin(),v.end());
        int l = v.size();
        for(i=0;i<k;i++)
        {
            ans.push_back(v[i].second);
        }
        return ans;
        
    }
};
