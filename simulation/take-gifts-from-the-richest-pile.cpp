class Solution {
public:
    int sq(long x)
    {
        if (x==1) return 1;
        double number = sqrt(x);
        return int(number);
    }
    long long pickGifts(vector<int>& gifts, int k) {
    int n = gifts.size();
    long t = 0;
    for(int i=0; i<k; i++){
        long max = 0;
        for(int j=0; j<n; j++){
            if(gifts[j]>max){
                t = j;
                max = gifts[j];
            }
        }
        int k = sq(max);
        gifts[t] = k;
    }   
    long sum = 0;
    for(long i=0; i<n; i++){
    sum += gifts[i];
    }
    return sum;
    }
};