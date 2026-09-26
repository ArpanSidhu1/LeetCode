bool comp(vector<int>& a,vector<int>& b){
        return a[1]<b[1];
}
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
    int n = points.size();
    sort(points.begin(),points.end(),comp); // sorting the array
    int arrow = 1; // we at worst case require one arrow to burst all ballons.
    int end = points[0][1]; // end point
    for(int i=1; i<n; i++){
        if(points[i][0]>end){
            arrow ++; // we would have to take another array.
            end = points[i][1]; //updating the end.
        }
    }
    return arrow;
    }
};