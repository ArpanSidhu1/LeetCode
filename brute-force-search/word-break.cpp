class Solution {
public:
    unordered_map<int,bool> memo;

    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> wordSet(wordDict.begin(),wordDict.end());
        return solve(s,0,wordSet);
    }

    bool solve(string s,int start,unordered_set<string> wordSet){
        if(start == s.size()) return true;

        if(memo.count(start)) return memo[start];

        for(int end = start; end<s.size(); end++){
            string newStr = s.substr(start,end-start+1);
            if(wordSet.count(newStr) && solve(s,end+1,wordSet)){
                return memo[start] = true;
            }
        }

        return memo[start] = false;
    }
};