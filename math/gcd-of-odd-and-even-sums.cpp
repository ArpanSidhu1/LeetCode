class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        
        // Sum of Odd N Numbers
        long long sumOdd = n*n;
        long long sumEven = n*(n+1);

        // Findind the Largest Gcd.
        int gcd = 0;
        for(int i=1; i<=max(sumEven,sumOdd); i++){
            if((sumEven%i==0) && (sumOdd%i==0)){
                gcd = i;
            }
        }

        return gcd;
    }
};