class Solution {
public:
    int help(int i,int j,int m,int n,vector<vector<int>>& dp)
    {
       if(i==n-1 || j==m-1) return 1;
       if(dp[i][j]!=-1) return dp[i][j];
       if(i>=n || j>=m) return 0;
       dp[i][j] = help(i+1,j,m,n,dp) + help(i,j+1,m,n,dp);
       return dp[i][j];
    }
    int uniquePaths(int m, int n) {
    vector<vector<int>> dp(m,vector<int> (n,-1));
    return help(0,0,n,m,dp);    
    }
};