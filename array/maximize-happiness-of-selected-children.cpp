class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
    int n = happiness.size(); int c = 0; long long sum = 0; int t;
    sort(happiness.begin(),happiness.end());
    for(int i=0; i<k; i++){
        t = happiness[n-i-1] - c;
        if(t<0) sum += 0;
        else sum += t;
        c++;
    }    
    return sum;
    }
};