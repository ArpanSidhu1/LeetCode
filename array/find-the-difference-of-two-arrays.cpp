class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> st1(nums1.begin(),nums1.end());
    unordered_set<int> st2(nums2.begin(),nums2.end());
    vector<vector<int>> res(2); 
    for(const auto x:st1){
        if(st2.find(x)==st2.end()) res[0].push_back(x);
    }   
    for(const auto x: st2){
        if(st1.find(x)==st1.end()) res[1].push_back(x);
    }
    //sort(res.begin(),res.end());
    return res;
    }
};