class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(auto x : s){
            if(x == '(' || x == '[' || x == '{'){
                st.push(x);
                continue;
            }

            if(!st.empty()){
                if(x==')' && st.top() == '(' || x=='}' && st.top() == '{'  || x==']' && st.top() == '['){
                    st.pop();
                }else{
                    st.push(x);
                }
            }else{
                st.push(x);
            }
        }

        return st.empty();
    }
};