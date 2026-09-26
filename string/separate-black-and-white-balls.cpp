class Solution {
public:
    long long minimumSteps(string s) {
    int c = 0;
    long long res = 0;
    int n = s.size();
    for(int i=0; i<n; i++){
        if(s[i]=='1'){
            c++;
        }
        else{
            res += c;
        }
    }
    return res;
    }
};