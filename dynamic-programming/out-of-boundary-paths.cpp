class Solution {
public:
    int memo[51][51][51];
    const int MOD = 1000000007;
    long findPathsR(int m, int n, int maxMove, int startRow, int startColumn) {
        // Base case
         if (startRow < 0 || startRow == m || startColumn < 0 || startColumn == n) {
                return 1;
            }
        if (maxMove <= 0) {
            return 0;
        }

        if(memo[startRow][startColumn][maxMove]!=-1){
            return memo[startRow][startColumn][maxMove];
        }
        // Recursive calls
        long res = 0;
        res =   (findPathsR(m, n, maxMove - 1, startRow - 1, startColumn)%MOD +
               findPathsR(m, n, maxMove - 1, startRow, startColumn - 1)%MOD +
               findPathsR(m, n, maxMove - 1, startRow + 1, startColumn)%MOD +
               findPathsR(m, n, maxMove - 1, startRow, startColumn + 1)%MOD)%MOD;
    return memo[startRow][startColumn][maxMove] = res;
    }
    long findPaths(int m, int n, int maxMove, int startRow, int startColumn){
        memset(memo,-1,sizeof(memo));
        return findPathsR(m,n,maxMove,startRow,startColumn);
    }
};
