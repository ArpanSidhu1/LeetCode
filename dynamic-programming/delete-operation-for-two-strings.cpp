class Solution {
public:
    vector<vector<int>> dp;
    int LCS(string x,string y,int n,int m)
    {
    if(n==0 || m==0) return 0;
    if(dp[n][m]!=-1) return dp[n][m];
    if(x[n-1]==y[m-1]){
        return dp[n][m] = 1+LCS(x,y,n-1,m-1);
    }
    else{
        return dp[n][m] = max(LCS(x,y,n-1,m),LCS(x,y,n,m-1));
    }
    return dp[n][m];
    }
    int minDistance(string word1, string word2) {
    int n = word1.size();
    int m = word2.size();  
    dp.assign(n+1,vector<int> (m+1,-1));  
    int lcs = LCS(word1,word2,n,m);
    return (n-lcs) + (m-lcs);
    }
};