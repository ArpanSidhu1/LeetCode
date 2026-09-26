class Solution {
public:

    struct Compare {
        bool operator()(const pair<string,int>& a,
                        const pair<string,int>& b) const {
            if(a.first<b.first && a.second == b.second) return true;
            if(a.second>b.second) return true;
            return false;
        }
    };

    vector<string> topKFrequent(vector<string>& words, int k) {
        priority_queue<pair<string,int>,vector<pair<string,int>>,Compare> minHeap;
        unordered_map<string,int> mp;
        
        for(auto x : words){
            mp[x]++;
        }

        for(auto x : mp){
            minHeap.push({x.first,x.second});
            if(minHeap.size()>k) minHeap.pop();
        }

        vector<string> topKFrqntWords;
        while(!minHeap.empty()){
            topKFrqntWords.push_back(minHeap.top().first);
            minHeap.pop();
        }

        reverse(topKFrqntWords.begin(),topKFrqntWords.end());

        return topKFrqntWords;
    }
};