class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<int> remElements;
        int start = nums[0]; int end = nums[nums.size()-1];
        for(int i=start; i<end; i++){
            if (find(nums.begin(), nums.end(), i) == nums.end()) {
                remElements.push_back(i);
            }
        }
        return remElements;
    }
};