class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        
        int include = nums[0];
        int exclude = 0;
        
        for(int i = 1; i < n; i++) {
            int temp = include;
            include = exclude + nums[i];
            exclude = max(exclude, temp);
        }
        
        return max(include, exclude);
    }
};
