class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row(rowIndex+1,0);
        row[0] = 1;
        int i,j;
        for(i=1;i<=rowIndex;i++){
            for(j=i; j>=1; j--){
                row[j] = row[j] + row[j-1];
            }
        }
    return row;    
    }
};