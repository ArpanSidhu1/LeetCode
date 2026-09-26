class Solution {
public:
    struct Compare {
        bool operator()(pair<int,int> a, pair<int,int> b) {
            return a.second > b.second;
        }
    };

    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>,
                   vector<pair<int,int>>,
                   Compare> minHeap;
                   
        unordered_map<int,int> mp;
        for(auto x : nums){
            mp[x]++;
        }

        for(auto x : mp){
            minHeap.push({x.first,x.second});
            if(minHeap.size()>k){
                minHeap.pop();
            }    
        }

        vector<int> topKElements;
        while(!minHeap.empty()){
            topKElements.push_back(minHeap.top().first);
            minHeap.pop();
        }

        return topKElements;
    }
};