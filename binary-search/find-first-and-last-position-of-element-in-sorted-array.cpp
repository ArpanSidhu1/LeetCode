class Solution {
public:
    int binarySearch(vector<int>& nums,int& target,bool leftFlag){
        int right = nums.size()-1;
        int left = 0;
        int idx = -1;
        
        while(left<=right){
            int mid = left + (right-left)/2;
            if(nums[mid] == target){
                idx = mid;
                leftFlag ? right = mid - 1 : left = mid + 1;
            }else if(nums[mid] > target){
                right = mid-1;
            }else{
                left = mid+1;
            }
        }
        return idx;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result;
        int leftIdx = binarySearch(nums,target,true);
        int rightIdx = binarySearch(nums,target,false);      
        result.push_back(leftIdx);
        result.push_back(rightIdx);
        return result;
    }
};