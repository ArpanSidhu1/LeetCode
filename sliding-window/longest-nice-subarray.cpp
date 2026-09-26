class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
    int n = nums.size(); int maxi = 0;
    int j = 0; int num = 0;
    for(int i=0; i<n; i++){
        while((num & nums[i])!=0)
        {
            num^=nums[j++];
        }
        num |= nums[i];
        maxi = max(maxi,i-j+1);
    }  
    return maxi;
    }
};