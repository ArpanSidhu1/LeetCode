class Solution {
public:
    string mergeAlternately(string word1, string word2) {
    string ans = "";
    int k = min(word1.size(),word2.size());
    int ind = 0;
    for(int i=0; i<k; i++){
        ans += word1[ind];
        ans += word2[ind];
        ind++;
    }   
    while(ind<word1.size()){
        ans+=word1[ind];
        ind++;
    }
    while(ind<word2.size()){
        ans+=word2[ind];
        ind++;
    }
    return ans;
    }
};