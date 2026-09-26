class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
    int i,j;    
   for(i = 0; i + indexDifference < nums.size(); ++i){
    for(j = i + indexDifference; j < nums.size(); ++j){
               if(abs(nums[i] - nums[j]) >= valueDifference) return {i, j};
        }
    }
       return {-1, -1};
    }
};