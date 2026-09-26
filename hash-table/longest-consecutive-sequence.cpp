class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        int n = nums.size();
        int longest = 1;
        unordered_set<int> st;
        for(auto num : nums){
            st.insert(num);
        }
        for(auto it : st){
            if(st.find(it-1)==st.end()){
                int x = it;
                int count = 1;
                while(st.find(x+1)!=st.end()){
                    count ++;
                    x = x+1;
                }
                longest = max(longest,count);
            }
        }
        return longest;
    }
};