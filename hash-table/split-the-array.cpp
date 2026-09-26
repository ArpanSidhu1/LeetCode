class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
    sort(nums.begin(),nums.end()); int c = 1;
    for(int i=0; i<nums.size()-1; i++){
        if(nums[i]==nums[i+1]) c+=1;
        else c=1;
        if(c>2) return false;
    }
        return true;
    }
};