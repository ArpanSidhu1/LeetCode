class Solution {
public:
    string customSortString(string order, string s) {
    int n = order.size(); string t;
    for(int i=0; i<n; i++){
        for(int j=0; j<s.size(); j++){
            if(order[i]==s[j]){
                t += s[j];
                s[j] = '*';
            }
        }
    }
    for(int i=0; i<s.size(); i++){
        if(s[i]!='*') t += s[i]; 
    }    
    return t;
    }
};