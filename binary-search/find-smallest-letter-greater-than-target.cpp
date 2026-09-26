class Solution {
public:
    char nextGreatestLetter(vector<char>& nums, char target) {
    int n = nums.size(); char ans; int min1 = INT_MAX;
    for(int i=0; i<n; i++){
        if(nums[i]==target) continue;
        if(int(nums[i])>int(target)){
            if((int(nums[i])-int(target)>0) && (int(nums[i])-int(target)<min1)){
                min1 = int(nums[i]) - int(target);
                ans = nums[i];
            }
        }
    }
    if(min1 == INT_MAX) return nums[0];    
    return ans;
    }
};