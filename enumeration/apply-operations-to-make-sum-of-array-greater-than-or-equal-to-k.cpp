class Solution {
public:
    int minOperations(int k) {
    int mini = INT_MAX;
    for(int i=1; i<=k; i++){
        int p = ceil(k/(i*1.0));
        mini = min(i-2+p,mini);
    }    
    return mini;
    }
};