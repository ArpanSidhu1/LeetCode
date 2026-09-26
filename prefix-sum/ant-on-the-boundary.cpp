class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
    int n = nums.size(); int b = 0; int cnt = 0;
    for(int i=0; i<n; i++){
        if(nums[i]<0)
        {
            b=b+nums[i];
        }
        else if(nums[i]>0)
        {
            b = nums[i] + b;
        }
        if(b==0) cnt++;
    }
    return cnt;
    }
};