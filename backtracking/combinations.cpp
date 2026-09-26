class Solution {
public:
    void combination(int k,vector<int>& current,vector<vector<int>>& result,int i,vector<int>& nums)
    {   
    if(i==nums.size()){
    if(k==0) {
        result.push_back(current); 
    }
    return;
    }
    current.push_back(nums[i]);
    combination(k-1,current,result,i+1,nums);
    current.pop_back();
    combination(k,current,result,i+1,nums);
    }
    vector<vector<int>> combine(int n, int k) {
    vector<vector<int>> result;
    vector<int> nums;
    vector<int> current;
    for(int i=1; i<=n; i++){
        nums.push_back(i);
    }
    combination(k,current,result,0,nums);
    return result;
    }
};