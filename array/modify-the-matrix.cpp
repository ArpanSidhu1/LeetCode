class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
    int n = matrix.size(); int m = matrix[0].size();
    vector<vector<int>> answer(matrix);
    for(int i=0; i<m; i++){
        int maxi = INT_MIN; 
        for(int j=0; j<n; j++){
               maxi = max(maxi,matrix[j][i]);
        }
        for(int r=0; r<n; r++){
            if(matrix[r][i]==-1){
                answer[r][i] = maxi;
            }
        }
    }
    return answer;
    }
};