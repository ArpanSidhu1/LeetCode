class Solution {
public:
    int countSubstrings(string s) {
    int n = s.size();
    int count = 0;
    vector<vector<bool>> dp(n,vector<bool> (n,0));
    // filling the diagonal 
    for(int i=0; i<n; i++){
        dp[i][i] = true;     // string length = 1
        count++;
    }
    for(int i=0; i<n-1; i++){
        if(s[i]==s[i+1]){     // string length = 2
            dp[i][i+1] = true;
            count ++ ;
        } 
    }
    //string length = 3 and above
    for(int len=3; len<=n; len++){
        for(int i=0; i<=n-len; i++){
            int j = i+len-1;
            if(s[i]==s[j] && dp[i+1][j-1]){
                dp[i][j] = true;
                ++count;
            }
        }
    }
    return count;
    }
};