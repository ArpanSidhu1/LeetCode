class Solution {
public:
    int numberOfGoodSubarraySplits(vector<int>& nums)
    {
        int prevInd = -1;
        long long int count=1;

        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i])
            {
                if(prevInd != -1)
                    count = (count*(i-prevInd) % 1000000007);

                prevInd = i;
            }
        }

        if(prevInd == -1) // There are no 1s
            return 0;
        return (int) count;
    }
};