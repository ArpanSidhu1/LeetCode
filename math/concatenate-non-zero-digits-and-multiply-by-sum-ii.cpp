const int MOD = 1e9 + 7;
const int MAX_N = 100001;
long long pow10[MAX_N];

// init runs only once for all test cases
int init = []() {
    pow10[0] = 1;
    for (int i = 1; i < MAX_N; ++i) {
        pow10[i] = (pow10[i - 1] * 10) % MOD;
    }
    return 0;
}();

class Solution {
public:
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        int n = s.size();
        vector<int> sum(n+1,0);
        vector<int> concatDigits(n+1,0);
        vector<int> length(n+1,0);
        vector<int> result;

        for(int i=0; i<n; i++){
            int d = s[i] - '0';
            sum[i+1] = sum[i] + d;

            if(d!=0){
                concatDigits[i+1] = ((1LL *concatDigits[i]*10%MOD) + d) %MOD;
            }else{
                concatDigits[i+1] = concatDigits[i];
            }
            length[i+1] = length[i] + (d > 0);
        }
        
        // Concat Digits is working Perfectly.
        // for(auto x : concatDigits){
        //     cout<<"X  : "<<x<<endl;
        // }

        // Sum is Working perfectly.
        // for(auto x : sum){
        //     cout<<"Sum : "<<x<<endl;
        // }

        for(auto x : queries){
            int l1 = x[0];
            int r1 = x[1] + 1;
            int kSum = sum[r1] - sum[l1];
            int len = length[r1] - length[l1];
            long long concatSum = ((concatDigits[r1] - 1LL * concatDigits[l1] * pow10[len] % MOD) % MOD + MOD) % MOD;
            result.push_back((1LL * kSum * concatSum) % MOD);
        }

        return result;
    }
};