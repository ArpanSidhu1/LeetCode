class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
    int n = intervals.size(); vector<vector<int>> result;
    int i = 0;
    while(i<n)
    {
        if(newInterval[0]>intervals[i][1]){
            result.push_back(intervals[i]); // pre intervals which are not included.
        }
        else if(newInterval[1]<intervals[i][0]){ //post intervals which are not included.
            break;
        }
        else{
            // OVERLAP AND MERGE 
            newInterval[0] = min(intervals[i][0],newInterval[0]); //Modifying the newInterval.
            newInterval[1] = max(intervals[i][1],newInterval[1]);
        }
        i++;
    }    
    result.push_back(newInterval); // we are pushing the new Interval
    while(i<n){
        result.push_back(intervals[i]); // to insert remaining post intervals.
        i++;
    }
    return result;
    }
};