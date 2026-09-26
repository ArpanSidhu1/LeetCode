class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
    unordered_set<int> set;
    for(const vector<int>& a : nums){
        for(int i=a[0]; i<=a[1]; i++){
            set.insert(i);
        }
    }
    return set.size();
    }
};