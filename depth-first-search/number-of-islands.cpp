class Solution {
public:
    void bfs(int row,int col,vector<vector<int>>& vis,vector<vector<char>>& grid)
    {
        vis[row][col] = 1;
        queue<pair<int,int>> q;
        q.push({row,col});
        int n = grid.size();
        int m = grid[0].size();

        while(!q.empty()){
            int r = q.front().first;
            int c = q.front().second;
            q.pop();

            int dr[] = {-1,0,1,0};
            int dc[] = {0,-1,0,1};

            for(int k=0; k<4; k++){
                    int nrow = r + dr[k];
                    int ncol = c + dc[k];
                    if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]=='1' && !vis[nrow][ncol]){
                        vis[nrow][ncol] = 1;
                        q.push({nrow,ncol});
                    }
                }
            }
        }
    int numIslands(vector<vector<char>>& grid) {
    int m = grid[0].size(); int n = grid.size();
    vector<vector<int>> vis(n,vector<int> (m,0));
    int cnt = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(!vis[i][j] && grid[i][j]=='1'){
                bfs(i,j,vis,grid);
                cnt++;
            }
        }
    }
    return cnt;   
    }
};