class Solution {
public:
    int sign(int n1, int n2, char s) {
        if (s == '+') return n1 + n2;
        else if (s == '-') return n1 - n2;
        else if (s == '/') return n1 / n2;
        else return n1 * n2;
    }

    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
        stack<int> st;

        for (int i = 0; i < n; i++) {
            if (isdigit(tokens[i][0]) || (tokens[i][0] == '-' && tokens[i].size() > 1)) {
                st.push(stoi(tokens[i]));
            } else {
                char t = tokens[i][0];  // Just store the character directly
                int t1 = st.top();
                st.pop();
                int t2 = st.top();
                st.pop();
                int t3 = sign(t2, t1, t);
                st.push(t3);
            }
        }

        return st.top();
    }
};
