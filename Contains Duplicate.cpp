class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> arrSet;
        for(int i=0;i<nums.size();i++){
            if(arrSet.count(nums[i])){
                return true;
            }
            arrSet.insert(nums[i]);
        }
        return false;
    }
};