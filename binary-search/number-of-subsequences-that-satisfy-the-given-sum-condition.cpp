class Solution {
public:
    int MOD = 1e9 + 7;
    
    long long solve(vector<int>& nums, int left, int right, int target, vector<long long>& pow2) {
        if (left > right) return 0;
        
        if (nums[left] + nums[right] <= target) {
            long long ways = pow2[right - left]; 
            return (ways + solve(nums, left + 1, right, target, pow2)) % MOD;
        } else {
            return solve(nums, left, right - 1, target, pow2);
        }
    }
    
    int numSubseq(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        vector<long long> pow2(n, 1);
        for (int i = 1; i < n; i++) {
            pow2[i] = (pow2[i-1] * 2) % MOD;
        }
        
        return (int) solve(nums, 0, n - 1, target, pow2);
    }
};