class Solution {
public:
    int getmax(vector<int> bars)
    {
        sort(bars.begin(),bars.end());
        int t = 2;
        int res = 2;
        for(int i=1; i<bars.size(); i++){
        t = (bars[i-1]+1 == bars[i]) ? t + 1:2;
        res = max(t,res);
        }
    return res;    
    }
    int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars) {
    int gap = min(getmax(hBars),getmax(vBars));
    return (gap)*(gap);   
    }
};