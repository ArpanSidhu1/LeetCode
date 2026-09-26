class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.size();
        int c = 0;
        string ans = "";
        for(auto x : s){
            if(c==0){
                c+=1;
            }else if(x == '('){
                c+=1;
                ans += x;
            }else if(x == ')'){
                c-=1;
                if(c>0){
                    ans += x; 
                }
            }
        }
        return ans;
    }
};