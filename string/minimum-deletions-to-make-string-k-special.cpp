class Solution {
public:
    int minimumDeletions(string word, int k) {
    vector<int> freq(26,0);
    for(char c: word) freq[c-'a']++;
    int n = word.size();
    int ans = INT_MAX;  
    sort(freq.begin(),freq.end());
    for(int i=0; i<26; i++){
        int curr = 0;
        for(int j=i; j<26; j++){
            curr += min(freq[i]+k,freq[j]);
        }
        ans = min(n-curr,ans);
    }    
    return ans;
    }
};