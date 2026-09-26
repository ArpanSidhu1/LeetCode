class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    int j = n-1;
    int i = 0;
    while(i<n){
        if(nums[i]+nums[j]==target) return {i+1,j+1};
        else if(nums[i]+nums[j]>target) j--;
        else if (nums[i]+nums[j]<target) i++;
    }    
    return {0,0};
    }
};