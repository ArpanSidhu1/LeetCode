class Solution {
public:
    int checkValidSubArray(long long num,int x){
        int lastDigit = num % 10;
        long long firstDigit = num;
        while (firstDigit >= 10) {
            firstDigit /= 10;
        }
        if(lastDigit == x && firstDigit == x){
            return 1;
        }
        return 0;
    }

    int countValidSubarrays(vector<int>& nums, int x) {
        vector<long long> arraySum;
        int n = nums.size();
        int count = 0;

        for(int i=0; i<n; i++){
            count += checkValidSubArray(nums[i],x);
            long long sum = nums[i];
            for(int j=i+1; j<n; j++){
                sum += nums[j];
                count += checkValidSubArray(sum,x);
            }
        }

        return count;
    }
};