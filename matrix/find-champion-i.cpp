class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
    int c = 0;
    int max = 0;
    int index = 0;
    int l = 0;
    for(const vector<int>& a : grid){
        for(auto x : a){
            if(x==1){
                c+=1;
            }
        }
        if(c>max){
            max = c;
            index = l;
        }
    c = 0;    
    l++;    
    }
    return index;
    }
};