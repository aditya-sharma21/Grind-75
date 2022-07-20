class Solution {
private:
    string dfs(string &s,int &idx){
        string ans="";
        while(idx < s.size() and s[idx]!=']'){
            
            if(!isdigit(s[idx]))
                ans+=s[idx++];
            else{
                
                int n=0;
                while(idx<s.size() and isdigit(s[idx]))
                    n=n*10+s[idx++]-'0';
             
                ++idx;
               
                string temp=dfs(s,idx);
                
                ++idx;
               
                while(n--)
                    ans+=temp;
            }
        }
       
        return ans;
    }
public:
    string decodeString(string s) {
        
        int idx=0;
        
        return dfs(s,idx);
    }
};
