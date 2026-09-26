class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int sum = 0;
    int newSum = 0;
    for(int i=0; i<n; i++){
        sum += nums[i];
        newSum += i;
    }    
    newSum += n;
    return newSum-sum;
    }
};