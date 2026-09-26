class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
    int n = indices.size();
    string current = "";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
        if(indices[j]==i){
          current+= s[j];
          break;
        }    
    }  
    }
    return current; 
    }
};