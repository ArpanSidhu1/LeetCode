class Solution {
public:
    int minChanges(string s) {
    int minchanges = 0;
    int n = s.size();
    for(int i=0; i<n; i+=2)
    {
        if(s[i]!=s[i+1])
            minchanges +=1;
    }
    return minchanges;    
    }
};