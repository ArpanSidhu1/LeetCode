class Solution {
public:
    int tri(int i,int j,vector<vector<int>>& triangle,vector<vector<int>>& dp)
    {
        if(i==triangle.size()-1) return triangle[i][j];
        if(dp[i][j]!=-1) return dp[i][j];
        int down = triangle[i][j] + tri(i+1,j,triangle,dp);
        int right = triangle[i][j] + tri(i+1,j+1,triangle,dp);
        return dp[i][j] = min(right,down);
    } 
    int minimumTotal(vector<vector<int>>& triangle) {
    int n = triangle.size();
    vector<vector<int>> dp(n,vector<int> (n,-1));
    return tri(0,0,triangle,dp);    
    }
};