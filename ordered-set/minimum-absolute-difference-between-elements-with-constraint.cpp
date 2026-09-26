class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums, int x) {
        set<int> st;
        int ans=1e9+6;
        for(int i=0;i<nums.size();i++)
        {
            if(i-x>=0) st.insert(nums[i-x]);
            auto it=st.lower_bound(nums[i]);
            if(it!=st.end()) ans=min(abs(*it-nums[i]),ans);
            if(it!=st.begin())
            {
                it--;
                ans=min(abs(*it-nums[i]),ans);
            }
            
        }
        return ans;
    }
};