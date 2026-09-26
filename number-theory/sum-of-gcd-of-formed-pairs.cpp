class Solution {
public:

    // Euclidean algorithm - O(log(min(n1,n2))) instead of O(max(n1,n2))
    long long getGcd(long long n1, long long n2) {
        while (n2) {
            n1 %= n2;
            swap(n1, n2);
        }
        return n1;
    }

    long long gcdSum(vector<int>& nums) {
        vector<long long> prefixGcd;

        int maxNum = 0;
        long long gcdSumResult = 0;

        // Making the Prefix Gcd.
        for(auto x : nums){
            maxNum = max(x,maxNum);
            prefixGcd.push_back(getGcd(x,maxNum));
        }

        sort(prefixGcd.begin(),prefixGcd.end());

        int n = prefixGcd.size();
        if(n%2 !=0){
            prefixGcd[(n/2)] = 0;
        }

        for(int i=0; i<n/2; i++){
            gcdSumResult += getGcd(prefixGcd[i],prefixGcd[n-i-1]);
        }

        return gcdSumResult;
    }
};