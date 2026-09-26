class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> result;

        int el1 = intervals[0][0];
        int el2 = intervals[0][1];

        for(int i=1; i<intervals.size(); i++){

            // fetching the next interval.
            int nextElement1 = intervals[i][0];
            int nextElement2 = intervals[i][1];

            // Compare the last with next interval and see if they can be consumed or not.            
            if((el2>=nextElement1 && el2<=nextElement2) || (el2>=nextElement1 && el2>=nextElement2)){
                el2 = max(el2,nextElement2);
            }else{
                result.push_back({el1,el2});
                el1 = nextElement1;
                el2 = nextElement2;
            }
        }
        result.push_back({el1,el2});

        return result;
    }
};