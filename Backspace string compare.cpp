class Solution {
public:
    string back_space(string s){
        while(s.find('#') != string::npos){
            int i = 0;
            while(i < s.size() and s[i] != '#')i++;
            if(i == 0)s = s.substr(i+1);  
            else s = s.substr(0,i-1) + s.substr(i+1);
        }
        return s;
    }
    bool backspaceCompare(string s, string t) {
        return back_space(s) == back_space(t);
    }
};
