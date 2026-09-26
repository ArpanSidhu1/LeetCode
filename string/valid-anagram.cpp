class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> mp(256,0);
        if(s.size()!=t.size()) return false;
        for(int i=0; i<s.size(); i++){
            mp[s[i]]++;
            mp[t[i]]--;
        }       
        for(auto x : mp){
            if(x!=0) return false;
        }
        return true;
    }
};