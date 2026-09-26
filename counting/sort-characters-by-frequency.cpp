class Solution {
public:
    struct Compare{
        bool operator()(const pair<char,int> &a,const pair<char,int> &b){
            return a.second<b.second;
        }
    };

    string frequencySort(string s) {
        unordered_map<char,int> ump;
        for(auto x : s) ump[x]++;
        priority_queue<pair<char,int>,vector<pair<char,int>>,Compare> minHeap;
        for(auto x : ump){
            minHeap.push(x);
        }
        string result = "";
        while(!minHeap.empty()){
            result += string(minHeap.top().second, minHeap.top().first);
            minHeap.pop();
        }
        return result;
    }
};