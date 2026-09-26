class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
    int n = nums.size(); vector<vector<int>> result;
    if(n%3!=0) return {};
    sort(nums.begin(),nums.end());
    for(int i=0; i<n; i+=3){
        if(nums[i+1]-nums[i]<=k && nums[i+2]-nums[i+1]<=k && nums[i+2]-nums[i]<=k){
            result.push_back({nums[i],nums[i+1],nums[i+2]});
        }
        else{
            return {};
        }
    }
    return result;    
    }
};