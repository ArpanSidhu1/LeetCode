class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int nearIndex = -1;
        int minD = INT_MAX;
        for(int i = 0; auto x : drones){
            int d1 = x[0]; int d2 = x[1]; int droneRange = x[2];
            int droneDistance = abs(d1 - target[0]) + abs(d2 - target[1]);
            if(droneDistance<=droneRange){
                cout<<"Drone Distance : "<<droneDistance<<endl;
                cout<<"Drone Range : "<<droneRange<<endl;
                cout<<"Min Distance : "<<minD<<endl;
                if((droneDistance)<minD){
                    minD = droneDistance;
                    nearIndex = i;
                } 
            }
            i++;
        }
        return nearIndex;
    }
};