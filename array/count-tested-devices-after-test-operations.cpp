class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
    int ans = 0;
    for(auto x : batteryPercentages)
    {
        if(x>ans){
            ans += 1;
        }
        else{
            ans += 0;
        }
    }    
    return ans;
    }
};