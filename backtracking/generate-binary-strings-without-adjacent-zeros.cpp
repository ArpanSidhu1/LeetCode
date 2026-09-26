class Solution {
public:
    vector<string> validStrings(int n) {
        vector<string> temp;
        string s = "";
        generateStrings(temp,s,n);
        return temp;
    }

    void generateStrings(vector<string>& temp,string& s,int n){
        if(s.length() == n){
            temp.push_back(s);
            return;
        }
        s.push_back('1');
        generateStrings(temp,s,n);
        s.pop_back();
        if(s.empty() || s.back()!='0'){
            s.push_back('0');
            generateStrings(temp,s,n);
            s.pop_back();
        }
    }
};