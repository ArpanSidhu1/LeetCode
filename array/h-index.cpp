class Solution {
public:
    int hIndex(vector<int>& citations) {
    int n = citations.size();
    int ans = 0;
    for(int i=0; i<10000; i++){
        int c = 0;
        for(int j=0; j<n; j++){
        if(i<=citations[j]){
            c++;
        }
        }
        if(c>=i){
            ans = max(ans,i);
        }
    }    
    return ans;
    }
};