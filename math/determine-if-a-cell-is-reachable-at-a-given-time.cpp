class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
    int difx = abs(sx-fx);
    int dify = abs(sy-fy);

    if(difx==0 && dify==0){
        return t!=1;
    }
    if(difx<=t && dify<=t){
        return true;
    }
    return false;
    }
};