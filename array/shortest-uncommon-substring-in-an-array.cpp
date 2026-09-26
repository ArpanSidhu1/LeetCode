class Solution {
public:
    vector<string> shortestSubstrings(vector<string>& arr) {
    int n = arr.size(); unordered_map<int,unordered_set<string>> ump;
    vector<string> ans(n,"");
    for(int k=0; k<n; k++){
        string s = arr[k];
        int sz = s.size();
        for(int i=0; i<sz; i++){
            for(int j=i; j<sz; j++){
                string temp = s.substr(i,j-i+1);
                ump[k].insert(temp);  // all the strings are generated.
            }
        }
    }
    for(int k=0; k<n; k++){
        string minString = ""; int minLen = INT_MAX;
        for(auto x: ump[k]){
            int flag = 1;
            for(int j=0; j<n; j++){
            if(k==j) continue;
            if(ump[j].contains(x)){
                flag = 0;
                break;
            }
            }
            if(flag){
                if(minLen>x.size()){
                    minLen = x.size();
                    minString = x;
                }
                else if(minLen==x.size() && x<minString){
                    minString = x;
                }
            }    
        }
    ans[k] = minString;
    }  
    return ans;
    }
};