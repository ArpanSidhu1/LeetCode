class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
    if(is_sorted(nums.begin(),nums.end())) { return 0 ; }
    int n = nums.size()-1;
    for(int i=1; i<=n; i++){
        int first = nums[n];
        for(int j=n; j>0; j--){
            nums[j] = nums[j-1];
        }
        nums[0] = first;
    if(is_sorted(nums.begin(),nums.end()))
    {
        return i;
    }
    }
    return -1;    
    }
};