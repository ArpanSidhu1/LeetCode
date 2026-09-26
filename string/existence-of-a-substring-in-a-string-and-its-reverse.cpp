class Solution {
public:
    bool isSubstringPresent(string s) {
    unordered_map<string,int> ump;
    for(int i=0; i<s.size()-1; i++){
        string k = "";
        k += s[i];
        k += s[i+1];
        ump[k]++;
    }
    reverse(s.begin(),s.end());
    for(int i=0; i<s.size()-1; i++){
        string m = "";
        m += s[i];
        m += s[i+1];
        if(ump.count(m)) return true;
    }
    return false;
    }
};