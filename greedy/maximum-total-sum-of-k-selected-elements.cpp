class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        // first observation last k elements will give maximum sum.
        sort(nums.begin(),nums.end());
        int n = nums.size();
        long long totalSum = 0;
        for(int i=n-1; i>=n-k; i--){
           long long mulNum = (long long)nums[i] * mul;
            long long sumNum = nums[i];
            totalSum += max(mulNum,sumNum);
            mul--;
        }
        return totalSum;
    }
};