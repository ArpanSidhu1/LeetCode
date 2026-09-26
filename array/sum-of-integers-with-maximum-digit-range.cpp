class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int maxDigitRange = 0;
        int n = nums.size();
        int totalSum = 0;

        for(int i=0; i<n; i++){
            int minRange = INT_MAX;
            int maxRange = INT_MIN;
            int x = nums[i];
            while(x!=0){
                int r = x%10;
                if(r<minRange){
                    minRange = r;
                }
                if(r>maxRange){
                    maxRange = r;
                }
                x = x/10;
            }

            int range = maxRange - minRange;
            if(range>maxDigitRange){
                maxDigitRange = range;
                totalSum = nums[i];
            }else if(range == maxDigitRange){
                totalSum += nums[i];                
            }
        }

        return totalSum;
    }
};