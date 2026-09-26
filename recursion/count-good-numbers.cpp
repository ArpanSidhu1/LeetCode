class Solution {
public:
    long long mod = 1000000007;

    long long power(long long base, long long exp,long long result){
        if(exp<=0){
            return result;
        }
        if(exp % 2 == 1) {
            result = result * base%mod;
        }
        base = base * base%mod;
        exp /= 2;
        return power(base,exp,result);
    }

    int countGoodNumbers(long long n) {
        long long result = 1;
        return power(5, (n+1)/2,result) * power(4, n/2,result) % mod;
    }
};