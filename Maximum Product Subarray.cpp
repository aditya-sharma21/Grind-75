class Solution {
public:
    int maxProduct(vector<int>& v) {
        int n=v.size();
        vector<int> maxlast(n,0),minlast(n,0);
        maxlast[0]=v[0];
        minlast[0]=v[0];
        int ans=maxlast[0];
        for(int i=1;i<n;i++)
        {
            maxlast[i]=max({maxlast[i-1]*v[i],v[i],minlast[i-1]*v[i]});
            minlast[i]=min({maxlast[i-1]*v[i],v[i],minlast[i-1]*v[i]});
            ans=max({ans,maxlast[i]});
        }
        return ans;
    }
};
