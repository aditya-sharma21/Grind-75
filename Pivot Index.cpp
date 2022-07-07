class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size(), leftSum=0;
        int rightSum = accumulate(nums.begin(),nums.end(),0);
        for(int i=0;i<=n-1;i++){
            rightSum = rightSum - nums[i];
            if(leftSum==rightSum) {
                return i;
            }
            else{
                leftSum = leftSum + nums[i];
            }
        }
        return -1;
    }
};
