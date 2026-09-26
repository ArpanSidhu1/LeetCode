class Solution {
public: 
    int unique(int i,int j,int n,int m,vector<vector<int>>& Grid,vector<vector<int>>& dp)
    {
        if(i==n-1 && j==m-1) return 1;
        if(i>=n || j>=m) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(Grid[i][j]==1) return 0;
        return dp[i][j] =  unique(i+1,j,n,m,Grid,dp) + unique(i,j+1,n,m,Grid,dp);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
    int n = obstacleGrid.size(); int m = obstacleGrid[0].size();
    vector<vector<int>> dp(n,vector<int> (m,-1));
    if(obstacleGrid[n-1][m-1]==1) return 0;
    return unique(0,0,n,m,obstacleGrid,dp);    
    }
};