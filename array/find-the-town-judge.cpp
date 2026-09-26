class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
    unordered_map<int,int> ump;
    if(n==1) return 1;
    for(int i=0; i<trust.size(); i++){
        ump[trust[i][1]]++;
    }    
    int ans = n-1;
    for(auto it=ump.begin(); it!=ump.end(); it++){
    if(it->second==ans){
        for(int i=0; i<trust.size(); i++){
            if(it->first==trust[i][0]){
                return -1;
            }
        }
        return it->first;
    }
    }
    return -1;
    }
};