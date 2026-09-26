class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
    stack<float> st;
    vector<pair<int,float>> pos_time; // time taken to reach target for ith car.

    for(int i=0; i<position.size(); i++) {
        pos_time.push_back({position[i],float(target-position[i])/speed[i]}); // using distance = speed x time;   
    }   
    sort(pos_time.begin(),pos_time.end()); //we will sort and then start from reverse

    for(int i=position.size()-1; i>=0; i--){
    double t = pos_time[i].second;
    if(st.empty() || st.top()<t){ //if the speed is more then it will be added to the fleet.
        st.push(t);
    }
    }
    return st.size();
    }
};