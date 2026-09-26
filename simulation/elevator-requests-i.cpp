class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int totalTime = requests[0];
        int reqSize = requests.size();
        int currFloor = requests[0];
        for(int i=1; i<reqSize; i++){
            if(currFloor == requests[i]) continue;
            totalTime += abs(requests[i] - requests[i-1]);
            currFloor = requests[i];
        }
        return totalTime;
    }
};