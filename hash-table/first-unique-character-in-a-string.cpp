class Solution {
public:
    int firstUniqChar(string s) {
    unordered_map<char,int> map;
    int n = s.size();
    for(int i=0; i<n; i++){
        map[s[i]]++;
    }   
    for(int j=0; j<n; j++){
        if(map[s[j]]==1) return j;
    }
    return -1;
    }
};