class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
    unordered_set<string> set;
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(board[i][j]!='.'){
                string row_str = "r" + to_string(i) + board[i][j];
                string col_str = "c" + to_string(j) + board[i][j];
                string box_str = "box" + to_string((i/3)*3+j/3) + board[i][j];
                if(!set.insert(row_str).second || !set.insert(col_str).second || !set.insert(box_str).second){
                    return false;
                }
            }
        }
    }  
    return true;
    }
};