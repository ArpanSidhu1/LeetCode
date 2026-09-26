class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int,int> ump;
        vector<int> result;

        for(auto x : nums2){
            int flag = 0;
            while(!st.empty() && st.top()<x){
                ump[st.top()] = x;
                st.pop();
                flag = 1;
            }
            if(flag == 0) ump[x] = -1;
            st.push(x);
        }

        for(auto x : nums1){
            result.push_back(ump.count(x) ? ump[x] : -1);
        }

        return result;
    }
};