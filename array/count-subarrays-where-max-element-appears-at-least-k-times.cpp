class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
    int n = nums.size();
    long long ans = 0;
    vector<int> st;
    int max1 = 0;
    for(int i=0; i<n; i++){
        max1 = max(max1,nums[i]); // to find the maximum element.
    }    
    for(int i=0; i<n; i++){
        if(nums[i]==max1) st.push_back(i+1);
        if(st.size() >= k) ans += st[st.size()-k];
    }
    return ans;
    }
};