class Solution {
public:
    int minPath(vector<vector<int>>& grid,int r,int c,int i,int j,vector<vector<int>>& dp)
    {
        if(i==r-1 && j==c-1) return grid[i][j];
        if(i>=r || j>=c) return 1e9;
        if(dp[i][j]!=-1) return dp[i][j];
        int down = minPath(grid,r,c,i+1,j,dp);
        int right = minPath(grid,r,c,i,j+1,dp);
        int ans = min(down,right) + grid[i][j];
        dp[i][j] = ans;
        return ans;
    }
    int minPathSum(vector<vector<int>>& grid) {
    int r = grid.size(); int c = grid[0].size();
    vector<vector<int>> dp(r,vector<int> (c,-1));
    return minPath(grid,r,c,0,0,dp);    
    }
};