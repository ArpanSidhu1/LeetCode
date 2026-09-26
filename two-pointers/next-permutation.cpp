class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int breakPoint = -1; int n = nums.size();

        // Finding the Last Breaking Point.
        for(int i=0; i<n-1; i++){
            if(nums[i]<nums[i+1]){
                breakPoint = i;
            }
        }

        if(breakPoint!=-1){
           // Find the smallest element in the suffix that is still greater than nums[breakPoint]
            for (int i = n - 1; i > breakPoint; i--) {
                if (nums[i] > nums[breakPoint]) {
                    swap(nums[breakPoint], nums[i]);
                    break;
                }
            }
            sort(nums.begin()+breakPoint+1,nums.end());
        }else{
            sort(nums.begin(),nums.end());
        }
    }
};