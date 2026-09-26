class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    int i,j;
    vector<int> ans;
    for(i=0; i<nums1.size(); i++){
        for(j=0; j<nums2.size(); j++){
            if(nums1[i]==nums2[j]){
                ans.push_back(nums1[i]);
                nums2[j]=-1;
                break;
            }
        }
    }    
    return ans;
    }
};