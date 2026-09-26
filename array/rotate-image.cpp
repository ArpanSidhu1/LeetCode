class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size(); int m = matrix[0].size();
        vector<vector<int>> result;
        for(int i=0; i<n; i++){
            vector<int> temp;
            for(int j=m-1; j>=0; j--){
                temp.push_back(matrix[j][i]);
            }
            result.push_back(temp);
        }
        matrix = result;
    }
};