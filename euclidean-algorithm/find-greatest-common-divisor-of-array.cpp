class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxNum = nums[0];
        int minNum = nums[nums.size()-1];
        for(int i=maxNum; i>0; i--){
            if(maxNum%i == 0 && minNum%i == 0){
                return i;
            }
        }
        return 0;
    }
};