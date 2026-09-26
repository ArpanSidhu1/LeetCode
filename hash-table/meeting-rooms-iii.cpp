class Solution {
public:
    int mostBooked(int n, vector<vector<int>>& meetings) {
    vector<int> ans(n,0);
    vector<long long> times(n,0);
    sort(meetings.begin(),meetings.end());
    for(int i=0; i<meetings.size(); i++){
        int start = meetings[i][0];
        int end= meetings[i][1];
        bool flag = false;
        int minind = -1;
        long long val = 1e18;
        for(int j=0; j<n; j++){
            if(times[j]<val) minind=j,val = times[j];
            if(times[j]<=start){
                times[j] = end;
                flag = true;
                ans[j]++;
                break;
            }
        }
        if(!flag){
            ans[minind]++;
            times[minind] += (1ll*(end-start));
        }
    }
    int max = -1,idx = -1;
    for(int i=0; i<n; i++){
        if(ans[i]>max){
            max = ans[i];
            idx = i;
        }
    }
    return idx;
    }
};