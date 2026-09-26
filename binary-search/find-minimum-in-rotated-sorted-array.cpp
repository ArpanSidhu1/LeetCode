class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size()-1;
        int minElement = INT_MAX;
        while(left<=right){
            int mid = left + (right-left)/2;
            minElement = min(nums[mid],minElement);
            if(nums[mid]>nums[left]){
                // sorted.
                if(nums[left]<minElement && nums[left]<nums[right]){
                    right = mid-1;
                } else{
                    left = mid+1;
                }
            }else{
                if(nums[right]<minElement && nums[right]<nums[left]){
                    left = mid + 1;
                }else{
                    right = mid - 1;
                }
            }
        }
        return minElement;
    }
};