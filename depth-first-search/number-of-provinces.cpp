class Solution {
    private :
    void dfs(int node,vector<vector<int>> al,vector<int>& vis)
    { 
        vis[node] = 1;
        for(auto it : al[node]){
            if(!vis[it]){
                vis[it] = 1;
                dfs(it,al,vis);
            }
        }

    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
    int n = isConnected.size();
    vector<vector<int>> adjl(n);
    for(int i=0; i<isConnected.size(); i++){
        for(int j=0; j<isConnected[0].size(); j++){
            if(isConnected[i][j]==1){
                adjl[i].push_back(j);
                adjl[j].push_back(i);
            }
        }
    }
    vector<int> vis(n,0);
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(!vis[i]){
        cnt++;
        dfs(i,adjl,vis);
        }
    }
    return cnt;
    }
};