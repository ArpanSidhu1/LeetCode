class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n  = nums.size();
        int left = 0; int right = n - 1;

        while(left<=right){
            int mid = left + (right-left)/2;
            if(nums[mid] == target) return mid;

            cout<<"Left Element : "<<nums[left]<<endl;
            cout<<"Middle Element : "<<nums[mid]<<endl;
            cout<<"Right Element : "<<nums[right]<<endl;
            cout<<endl;
            cout<<endl;

            if(nums[mid]>=nums[left]){
                if(target>=nums[left] && target<=nums[mid]){
                    right = mid - 1;
                }else{
                    left = mid + 1;
                }
            }else{
                if(target>=nums[mid] && target<=nums[right]){
                    left = mid + 1;
                }else{
                    right = mid - 1;
                }
            }
        }
        return -1;
    }
};