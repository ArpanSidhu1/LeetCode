class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
    int n = nums.size();
    int ans = 0 ;
    for(int i = 0; i<n; i++){
        {
            for(int j=i; j<n; j++){
                if(min(nums[i],nums[j])>=abs(nums[i]-nums[j])){
                    ans = max(nums[i]^nums[j],ans);
                }
            }
        }
    }
    return ans;
    }
};