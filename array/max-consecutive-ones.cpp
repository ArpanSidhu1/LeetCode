class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0;
        int c = 0;
        for(auto num:nums){
            if(num==1){
                c++;
                maxCount = max(maxCount,c);
            }else{
                c = 0;
            }
        }
        return maxCount;
    }
};