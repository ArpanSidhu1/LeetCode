class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
    int k = nums[0].size(); int sum = 0;
    while(k!=0)
    {
        int max1 = 0;
        int t = 0;
        for(vector<int>& x : nums)
        {
            int max2 = 0;
            int n = x.size();
            for(int i=0; i<n; i++){
                if(max2<=x[i]){
                    max2 = x[i];
                    t = i;
                }
            }
            if(max2>max1) max1 = max2;
            x[t] = 0;
        }
        sum += max1;
        k--;
    }
    return sum;
    }
};