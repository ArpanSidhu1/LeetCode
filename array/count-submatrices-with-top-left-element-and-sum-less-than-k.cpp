class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
    vector<vector<int>> modify(grid.size(),vector<int> (grid[0].size()));
    int n = grid.size(); int m = grid[0].size();
    modify[0][0] = grid[0][0]; 
    int c = grid[0][0]<=k?1:0;
    for(int i=1; i<n; i++){
        modify[i][0] = modify[i-1][0] + grid[i][0]; // prefix sum for first column
        if(modify[i][0]<=k) c+=1;
    }
    for(int i=1; i<m; i++){
        modify[0][i] = modify[0][i-1] + grid[0][i];  // prefix sum for first row
        if(modify[0][i]<=k) c+=1;
    }
    for(int i=1; i<n; i++){
        for(int j=1; j<m; j++){
            modify[i][j] = modify[i-1][j] + modify[i][j-1] - modify[i-1][j-1] + grid[i][j];
            if(modify[i][j]<=k) c+=1;
         }
    }
    return c;
    }
};