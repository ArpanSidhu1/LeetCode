class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& nums) {
    int n = nums.size(); float max1 = 0; int ans = 0;
    for(int i=0; i<n; i++){
        int diagonal = nums[i][0]*nums[i][0] + nums[i][1]*nums[i][1];
        if(diagonal>max1 || (diagonal== max1 && ans<nums[i][0]*nums[i][1])){
            ans = nums[i][0]*nums[i][1];
            max1 = diagonal;
        }
    }
    return ans;
    }
};