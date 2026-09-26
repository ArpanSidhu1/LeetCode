class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
    int ans = 0; long i=0; long  j = 0; long k = max(nums1.size(),nums2.size());
    while(i<nums1.size() && j<nums2.size()){
    if(nums1[i]==nums2[j]) return nums1[i];
    else if(nums1[i]>nums2[j]) j++;
    else if(nums1[i]<nums2[j]) i++;
    }
    return -1;
    }
};