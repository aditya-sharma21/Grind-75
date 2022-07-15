class Solution {
public:
    unordered_map<int, bool> memo;
    bool wordBreak(string s, vector<string>& wordDict) {
        return rec(0, wordDict, s);
    }
    
    bool rec(int start, vector<string>& wordDict, string& s) {
        if (start >= s.size()) return true;
        if (memo.count(start)) return memo[start];
        for (auto const& word : wordDict) {
            if (word == s.substr(start, word.size()))
                if (rec(start+word.size(), wordDict, s))
                    return memo[start] = true;
        }
        return memo[start] = false;
    }
};
