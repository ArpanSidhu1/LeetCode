class Solution {
public:
    int minimumSum(vector<int>& nums) {
    int n = nums.size();
    int sum = 1e9;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if(nums[i]<nums[j] && nums[j]>nums[k]){
                    sum = min(sum,nums[i]+nums[j]+nums[k]);
                }
            }
        }
    }  
    return sum==1e9?-1:sum;
    }
};