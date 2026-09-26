class Solution {
public:
    bool isSubsequence(string s, string t) {
    if(s.empty()){
        return true;
    }
    stack<char> st;
    int sindex=0;
    for(int tindex=0; tindex<t.length(); tindex++){
        if(t[tindex] == s[sindex]){
            st.push(s[sindex]);
            sindex++;
        }
        if(sindex==s.length()){
            break;
        }
    }
    return st.size() == s.length() && sindex == s.length();
    }
};