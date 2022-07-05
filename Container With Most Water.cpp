class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0, right = n - 1;
        int ans = 0;
        
        while(left < right) {
            int left_h = height[left];
            int right_h = height[right];
            int dist = right - left;
            ans = max(ans, dist * min(left_h, right_h));
            
            if(left_h == right_h) left++, right--;
            else if(left_h < right_h) left++;
            else right--;
        }
        
        return ans;
    }
};
