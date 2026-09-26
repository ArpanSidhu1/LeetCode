class Solution {
public:
    int minimumOperationsToWriteY(vector<vector<int>>& grid) {
    int n=grid.size();
    int a[3]={0,0,0};
    int b[3]={0,0,0};
    for(int i=0 ;i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(j==n/2 && i>=n/2 || j==i && i<n/2 || i+j==n-1 && i<n/2)  a[grid[i][j]]++;
            else b[grid[i][j]]++;
        }
    }
    int maxi=0;
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            if(i!=j){
            maxi=max(maxi,a[i]+b[j]);
            }    
        }
    }
    return n*n-maxi;
    }
};