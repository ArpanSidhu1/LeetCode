class Solution {
public:
    string maximumOddBinaryNumber(string s) {
    int n = s.size();
    for(int i=0; i<n; i++){
        if(s[i]=='1'){
            swap(s[i],s[n-1]);
        }
    }    
    int st = 0;
    for(int i=0; i<n-1; i++){
        if(s[i]=='1'){
            swap(s[st],s[i]);
            st++;
        }
    }
    return s;
    }
};