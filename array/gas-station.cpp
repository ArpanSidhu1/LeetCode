class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    int total_gas = 0; int total_cost = 0;
    int n = gas.size(); int start = 0;
    int current = 0;
    for(int i=0; i<n; i++){
        total_gas += gas[i];
        total_cost += cost[i];
    }  
    if(total_gas<total_cost) { return -1 ; }
    for(int i=0; i<n; i++){
    current += gas[i] - cost[i];
    if(current<0){
        start = i+1;
        current = 0;
    }
    }
    return start;
    }
};