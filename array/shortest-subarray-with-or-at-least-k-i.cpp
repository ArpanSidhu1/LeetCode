class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
    int n = nums.size(); int mini = INT_MAX;
    for(int i=0; i<n; i++){
        int sum = 0;
        sum |= nums[i]; 
        if(sum>=k) return 1;
        for(int j=i+1; j<n;j++){
            sum |= nums[j]; 
            if(sum>=k) {
            mini = min(mini,j-i+1);
            } 
        }
    }   
    if(mini == INT_MAX) return -1;
    return mini;
    }
};