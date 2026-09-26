class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int n = nums.size(); 
        sort(nums.begin(),nums.end());

        for(int i=0; i<n; i++){
            // Nums[i] will be static.
            if(i>0 && nums[i] == nums[i-1]) continue;
            int left = i+1; int right = n-1;
            while(left<right){
                // Now it became two sum.
                int sum = nums[i] + nums[left] + nums[right];
                if(sum<0) { left++; }
                else if(sum>0) { right--; }
                else{
                    result.push_back({nums[i],nums[left],nums[right]});
                    left++; right--;
                    // to avoid duplicates
                    while(left<right && nums[left] == nums[left-1]) left++;
                    while(left<right && nums[right] == nums[right+1]) right--;
                }
            }
        }
        return result;
    }
};