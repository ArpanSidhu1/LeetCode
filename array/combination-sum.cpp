class Solution {
public:
    void generator(int index,vector<int>& current,vector<vector<int>>& result,vector<int>& nums,int target){
    if(index==nums.size()){
        if(target==0){
           result.push_back(current);
        }
    return;    
    }
    if(target>=nums[index]){
        current.push_back(nums[index]);
        generator(index,current,result,nums,target-nums[index]);
        current.pop_back();
    }
    generator(index+1,current,result,nums,target);
}    
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
    vector<int> current;
    vector<vector<int>> result;
    generator(0,current,result,nums,target);
    return result;
    }
};