class Solution {
public:
    void mergeArray(vector<int>& nums,int low,int mid,int high){
        vector<int> temp;
        int left=low; int right=mid+1;
        while(left <= mid && right <= high){
            if(nums[left] <= nums[right]){
                temp.push_back(nums[left++]);
            } else {
                temp.push_back(nums[right++]);
            }
        }

        while(left <= mid){
            temp.push_back(nums[left++]);
        }

        while(right <= high){
            temp.push_back(nums[right++]);
        }

        for(int i=low; i<=high; i++){
            nums[i] = temp[i-low];
        }
    }

    void sortArraySecond(vector<int>& nums,int low,int high){
        if(low>=high) return;
        int mid = low + (high - low) / 2;
        sortArraySecond(nums,low,mid);
        sortArraySecond(nums,mid+1,high);
        mergeArray(nums,low,mid,high);
    }

    vector<int> sortArray(vector<int>& nums) {
        sortArraySecond(nums,0,nums.size()-1);
        return nums;
    }
};