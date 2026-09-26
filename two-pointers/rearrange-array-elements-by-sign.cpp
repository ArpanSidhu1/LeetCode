class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int left = 0; int right = 0;
        int n = nums.size(); vector<int> temp;
        while(right<n && left<n){
            if(nums[left]>0 && nums[right]<0){
                temp.push_back(nums[left]);
                temp.push_back(nums[right]);
                left++; right++;
            }
            else if(nums[left]<0) {
                left++;
            }else{
                right++;
            }
        }
        return temp;
    }
};