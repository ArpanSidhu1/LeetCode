class Solution {
public:

    void permutation(vector<int> nums,vector<int> temp,vector<vector<int>>& result,vector<int> freq){
        if(nums.size() == temp.size()) {
            result.push_back(temp);
            return;
        }
        for(int i=0; i<nums.size(); i++){
            if(freq[i]!=1){
                freq[i] = 1;
                temp.push_back(nums[i]);
                permutation(nums,temp,result,freq);
                temp.pop_back();
                freq[i] = 0;
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> temp;
        vector<int> freq(nums.size(), 0);
        permutation(nums,temp,result,freq);
        return result;
    }
};