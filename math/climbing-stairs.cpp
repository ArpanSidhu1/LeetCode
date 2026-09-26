class Solution {
public:
    int rec(int k,vector<int>& dp){
        if(k<0) {
        return 0;
        }
        if(k==0){
            return 1;
        }
        if(dp[k]!=-1) {
            return dp[k];
        }
        dp[k] = rec(k-1,dp) + rec(k-2,dp);
        return dp[k];
    }
    int climbStairs(int n) {
    vector<int> dp(1000,-1);
    int ans = rec(n,dp);
    return ans;
    }
};