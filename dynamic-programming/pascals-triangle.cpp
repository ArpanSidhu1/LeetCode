class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n = numRows;
        vector<vector<int>> result;
        result.push_back({1});
        for(int i=1; i<n; i++){
            vector<int> temp;
            temp.push_back(1);
            for(int j=0; j<i-1; j++){
                cout<<"I : "<<i<<endl;
                temp.push_back(result[i-1][j] + result[i-1][j+1]);
            }
            temp.push_back(1);
            result.push_back(temp);
        }
        return result;
    }   
};