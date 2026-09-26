class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       int k = 0; // pointed at first array.
       int p = 0; // pointed at second array.
       vector<int> temp;
       while(k<m && p<n){
            if(nums1[k]<=nums2[p]){
                temp.push_back(nums1[k]);
                k++;
            }else{
                temp.push_back(nums2[p]);
                p++;
            }
       } 
       while(k<m){
            temp.push_back(nums1[k]);
            k++;
       }
       while(p<n){
            temp.push_back(nums2[p]);
            p++;
       }
       nums1 = std::move(temp);
    }
};