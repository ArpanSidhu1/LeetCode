class Solution {
public:
    int maximumLengthSubstring(string s) {
    unordered_map<char,int> ump;
    int i = 0; int j = 0; int n = s.size(); int maxi = 0;
    while(j<n)
    {
    ump[s[j]]++;
    if(ump[s[j]]>2){
        while(ump[s[j]]>2){
            ump[s[i]]--;
            i++;
        }
    }
    j++;
    maxi = max(maxi,j-i);
    }
    return maxi;
    }
};