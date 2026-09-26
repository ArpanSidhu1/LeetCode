class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size(); int curr = 0;
        int left = 0; int right = n-1;
        int start = 0;
        while(left<=right){
            if(nums[left] == 2){
                swap(nums[left],nums[right]);
                right--;
            }else if(nums[left] == 0){
                swap(nums[left],nums[start]);
                start++;
                left++;
            }else{
                left++;
            }
        }
    }
};