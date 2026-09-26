class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
    int ans = numBottles;
    if(numBottles<numExchange) return ans;
    int eBottles = numBottles;
    while(eBottles>0){
        eBottles = eBottles - numExchange;
        numExchange += 1;
        eBottles += 1;
        ans += 1;
        if(eBottles<numExchange) break;
    }    
    return ans;
    }
};