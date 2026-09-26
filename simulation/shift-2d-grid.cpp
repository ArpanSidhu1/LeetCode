class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {

        int totalElements = grid.size() *  grid[0].size(); 
        k = k % totalElements;

        vector<int> array1;
        vector<int> array2;
        
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if(array1.size()>=totalElements-k){
                    array2.push_back(grid[i][j]);
                }else{
                    array1.push_back(grid[i][j]);
                }
            }
        }


        int idx1 = 0;
        int idx2 = 0;
        
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if(idx1<array2.size()){
                    grid[i][j] = array2[idx1];
                    idx1++;
                }else if(idx2<array1.size()){
                    grid[i][j] = array1[idx2];
                    idx2++;
                }
            }
        }

        return grid;
    }   
};