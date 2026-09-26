class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> mp; int n = nums.size();
        int c = 0; int preSum = 0;
        mp[preSum] = 1;
        for(int i=0; i<n; i++){
            preSum += nums[i];
            int remove = preSum - k;
            c += mp[remove];
            mp[preSum] += 1;
        }
        return c;
    }
};