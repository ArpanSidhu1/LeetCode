class Solution {
public:
    vector<string> getWordsInLongestSubsequence(int n, vector<string>& words, vector<int>& groups) {
    vector<string> res;
    int current = -1;
    for(int i=0; i<n; i++){
        if(current!=groups[i]){
            res.push_back(words[i]);
            current = groups[i];
        }
    }
    return res;
    }
};