class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        stack<int> st;
        vector<int> result(n,-1);
        for(int i=0; i<n; i++){
            while(!st.empty() && nums[st.top()] < nums[i]){
                result[st.top()] = nums[i];
                st.pop();
            }
            st.push(i);
        }
        for(int i=0; i<n; i++){
            while(!st.empty() && nums[st.top()] < nums[i]){
                result[st.top()] = nums[i];
                st.pop();
            }
            st.push(i);
        }
        return result;
    }
};