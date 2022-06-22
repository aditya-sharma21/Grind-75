class Solution {
public:
    bool isValid(string s) {
        stack<char> a;
        char b;
        for(int i=0;i<s.size();i++){
            b=s[i];
            if(b=='('||b=='{'||b=='[') a.push(b);
            else if(!a.empty()){
                if(b==')'&& a.top()=='(')a.pop();
                else if(b=='}'&& a.top()=='{')a.pop();
                else if(b==']'&& a.top()=='[')a.pop();
                else return false;
            }
                else return false;
        }
                return a.empty();
    }
};