class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
    int sum = 0;
    int sum1 = 0; 
    int t = 1;
    vector<int> result;
    unordered_set<int> st;
    for(const vector<int>& x : grid){
        for(int i=0; i<x.size(); i++){
        if(st.find(x[i])==st.end()){
            st.insert(x[i]);
            sum += x[i];
        }
        else{
            result.push_back(x[i]);
        }
        sum1 += t;
        t++;
    }
    }
    result.push_back(sum1-sum);    
    return result;
    }
};