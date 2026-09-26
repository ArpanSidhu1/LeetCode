class Solution {
public:
    vector<string> generateParenthesis(int n) {
        string output = "";
        vector<string> temp;
        int open = n; int close = n;
        generateParenthesisRec(temp,output,open,close,n);
        return temp;
    }

    void generateParenthesisRec(vector<string>& temp,string output,int open,int close, int n){
        if(open == 0 && close == 0){
            temp.push_back(output);
            return;
        }
        if(open!=0){
            string op1 = output;
            op1.push_back('(');
            generateParenthesisRec(temp,op1,open-1,close,n);
        }
        if(close>open){
            string op2 = output;
            op2.push_back(')');
            generateParenthesisRec(temp,op2,open,close-1,n);
        }
    }
};