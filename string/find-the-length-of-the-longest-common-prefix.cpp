class Solution {
public:
    int length(int n)
    {
        string ans = to_string(n);
        return ans.size();
    }
    int longestCommonPrefix(vector<int>& a, vector<int>& b) {
    unordered_set<int> st;
    for(auto x : a){
        while(x>0){
            st.insert(x);
            x = x/10;
        }
    }    
    int ans = 0;
    for(auto y : b){
        while(y>0){
            if(st.find(y)!=st.end()){
                ans = max(ans,length(y));
            }
            y = y/10;
        }
    }
    return ans;
    }
};