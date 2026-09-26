class Solution {
public:
    bool subsetsum(vector<int>& nums,int sum,int n)
    {
    vector<vector<bool>> dp(n+1,vector<bool> (sum+1));
    for(int i=0; i<n+1; i++){
        for(int j=0; j<sum+1; j++){
            if(i==0) { dp[i][j] = false; }
            if(j==0) { dp[i][j] = true;   } 
        }
    }   
    for(int i=1; i<n+1; i++){
        for(int j=1; j<sum+1; j++){
            if(j>=nums[i-1]){
                dp[i][j] = dp[i-1][j-nums[i-1]] || dp[i-1][j];
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][sum];
    }
    bool canPartition(vector<int>& nums) {
    long sum1 = 0;
    int n = nums.size();
    for(long i=0; i<n; i++){
        sum1 += nums[i];
    }   
    if(sum1%2==0){
        int sum = sum1/2;
        bool ans = subsetsum(nums,sum,n);
        return ans;
    }
    return false;
    }
};