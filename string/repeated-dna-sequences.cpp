class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
    int n = s.size();
    int i = 0 ; int j = 0;
    set<string> st;
    set<string> res;
    vector<string> result;
    while(j<s.length()){
        if(j-i+1==10)
        {
            if(st.find(s.substr(i,10))==st.end()){
                st.insert(s.substr(i,10));
            }
            else{
                res.insert(s.substr(i,10));
            }
            i++;
        }
    j++;    
    }
    for(auto x: res){
        result.push_back(x);
    }   
    return result;
    }
};