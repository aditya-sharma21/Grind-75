class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char, int> mp;
        
        char ans;
        for(auto it:s){
            if(mp.find(it) != mp.end()){
                ans = it;
                break;
            }
            mp[it]++;
        }
        return ans;
    }
};
