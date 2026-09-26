class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size()-1;
        int c = 0;
        for(int i=0; i<n; i++){
            if(nums[i]>nums[i+1]){
                c++;
            }
        }
        if(nums[0]<nums[n]){
            c++;
        }
        if(c>1) return false;
        return true;
    }
};