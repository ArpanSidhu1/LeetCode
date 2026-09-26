class Solution {
public:
    string convert(string s, int numRows) {
    bool flag = false;
    if(numRows==1){
        return s;
    }
    vector<string> ans(numRows);
    int i=0;
    for(char ch:s){
        ans[i]+=ch;
        if(i==0 || i==numRows-1){
            flag = !flag;
        }
        if(flag){
            i+=1;
        }
        else{
            i-=1;
        }    
    }   
    string zigzag = "";
    for(auto x : ans){
        zigzag +=x;
    }
    return zigzag;
    }
};