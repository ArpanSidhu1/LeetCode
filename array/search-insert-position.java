class Solution {
    public int searchInsert(int[] nums, int target) {
        int n = nums.length; int ans = 0;
        int left = 0; int right = n-1;
        while(left<=right){
            int mid = left+right-left/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid]<target){
                left = mid+1;
                ans = left;
            }else{
                right = mid-1;
            }
        }
        return ans;
    }
}