class Solution {
public:
    int countMatchingSubarrays(vector<int>& nums, vector<int>& pattern) {
    int m = pattern.size(); int n = nums.size(); int cnt = 0;
    for(int i=0; i<n; i++){
        int f = 0;
        if(i+m>=n) break;
        for(int k=i; k+1<=i+m; k++){
            if(nums[k]>nums[k+1] && pattern[k-i]==-1)
                continue;
            else if(nums[k+1]==nums[k] && pattern[k-i]==0)
                continue;
            else if(nums[k+1]>nums[k] && pattern[k-i]==1)
                continue;
            f = 1;
            break;
        }
        if(f==0) cnt++;
    }
        return cnt;
    }
};