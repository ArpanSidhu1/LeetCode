class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& nums, int candy) {
    int maxi = INT_MIN; int n = nums.size(); 
    vector<bool> ans;
    for(int i=0; i<n; i++){
        if(nums[i]>maxi){
            maxi = nums[i];
        }
    }   
    for(int i=0; i<n; i++){
        if(nums[i]+candy>=maxi){
            ans.push_back(true);
        }
        else{
            ans.push_back(false);
        }
    }
    return ans;
    }
};