class Solution {
public:
    int minimumLevels(vector<int>& possible) {
    int bob = 0;
    for(auto &x : possible){
        if(x==0) x = -1;
        bob += x;
    }  int dan = 0;   
    for(int i=0; i<possible.size()-1; i++){
        dan += possible[i];
        bob -= possible[i];
        if(dan>bob) return i+1;
    }
    return -1;
    }
};