class Solution {
public:
    bool canJump(vector<int>& nums) {
       int len = nums.size();
        vector<bool> v(len); // default: false
        v[len-1] = true;
        
        for(int i = len - 2; i >= 0; i--) {
            if(nums[i] == 0) continue; // means, v[i] = false
            
            for(int j = 1; j <= nums[i]; j++) 
                if(v[i+j]) { v[i] = true; break;}
        }
        return v[0];
    }
};
