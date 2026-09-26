class Solution {
public:
    
    void subset(vector<int> nums,int idx,int n,vector<vector<int>>& result,vector<int> temp){
        if(idx == n){   
            result.push_back(temp);
            return;
        }
        temp.push_back(nums[idx]);
        subset(nums,idx+1,n,result,temp);
        temp.pop_back();
        subset(nums,idx+1,n,result,temp);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> temp;
        int n = nums.size();
        subset(nums,0,n,result,temp);
        return result;
    }
};