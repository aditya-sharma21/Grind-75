class Solution {
public:
    bool isPalindrome(string s) {
         int n = s.length();
        int l=0,r=n-1;
        bool expression1;
        bool expression2;
        while (l<r){
            expression1 = ((s[l]>=65 && s[l]<=90) || (s[l]>=97 && s[l]<=122) || (s[l]>=48 && s[l]<=57));
            expression2 = ((s[r]>=65 && s[r]<=90) || (s[r]>=97 && s[r]<=122) || (s[r]>=48 && s[r]<=57));
            if (expression1 && expression2){
                if (s[l]>=65 && s[l]<=90)
                    s[l]+=32;
                if (s[r]>=65 && s[r]<=90)
                    s[r]+=32;
                if (s[l] != s[r])
                    return false;
                l++;
                r--;
            }
            else{
                if (!expression1)
                    l++;
                if (!expression2)
                    r--;
            }
        }
        return true;
    }
};