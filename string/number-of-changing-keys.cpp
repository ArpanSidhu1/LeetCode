class Solution {
public:
    int countKeyChanges(string s) {
    int c = 0; int n = s.size();
    for(int i=0; i<n-1; i++){
        if(tolower(s[i])!=tolower(s[i+1])){
            c++;
        }
    }
    return c;
    }
};