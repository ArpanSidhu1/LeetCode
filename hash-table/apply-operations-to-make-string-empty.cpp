class Solution {
public:
    string lastNonEmptyString(string s) {
    unordered_map<char,int> ump;
    int maxi = 0;
    for(auto x: s){
        ump[x]++;
        maxi = max(maxi,ump[x]);
    }    
    string ans;
    for(int i=s.size()-1; i>=0; i--){
        if(maxi==ump[s[i]]){
        ans.push_back(s[i]);
        }
        ump[s[i]]--;
    }
    reverse(ans.begin(),ans.end());
    return ans;
    }
};