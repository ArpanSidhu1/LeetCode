class Solution {
public:
void generator(int index,vector<int>& current,vector<vector<int>>& result,vector<int> nums,set<vector<int>>& set)
{
    if(index==nums.size()){
    set.insert(current);
    return;     
    }
    current.push_back(nums[index]);
    generator(index+1,current,result,nums,set);
    current.pop_back();
    generator(index+1,current,result,nums,set);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    vector<int> current;
    set<vector<int>> set;
    vector<vector<int>> result;
    sort(nums.begin(),nums.end());
    generator(0,current,result,nums,set);   
    for(auto x : set){
        result.push_back(x);
    }
    return result;
    }
};