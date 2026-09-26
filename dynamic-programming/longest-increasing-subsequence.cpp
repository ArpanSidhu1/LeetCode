class Solution {
public:
    int f(int ind,int pind,vector<int>& nums,int n,vector<vector<int>> dp)
    {
        if(ind == n) return 0;
        if(dp[ind][pind+1]!=-1) return dp[ind][pind+1];
        int len = 0+f(ind+1,pind,nums,n,dp);

        if(pind == -1 || nums[ind]>nums[pind]){
            len = max(len,1+f(ind+1,ind,nums,n,dp));
        }
        return dp[ind][pind+1] = len;
    }
    int longest(vector<int>& nums,int n)
    {
        vector<vector<int>> dp(n+1,vector<int> (n+1,0));
        for(int ind = n-1; ind>=0; ind--){
            for(int pind = ind-1; pind>=-1; pind--){
                int len = 0 + dp[ind+1][pind+1];
                if(pind == -1 || nums[ind]>nums[pind]){
                    len = max(len,1+dp[ind+1][ind+1]);
                }
                dp[ind][pind+1] = len;
            }
        }
        return dp[0][0];
    }
    int lengthOfLIS(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> dp(n,vector<int> (n+1,-1));
    return longest(nums,nums.size());    
    }
};