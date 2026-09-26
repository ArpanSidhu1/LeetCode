class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
        if (a[0] != b[0]) return a[0] < b[0];
        return a[1] > b[1];
    });
    int n = intervals.size();
    int maxNum = 0;
    int count = 0;
    for(auto x : intervals){
        if(x[1]>maxNum){
            maxNum = x[1];
            count++;
        }
    }
    return count;
    }
};