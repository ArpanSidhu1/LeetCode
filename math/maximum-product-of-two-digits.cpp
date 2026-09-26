class Solution {
public:
    int maxProduct(int n) {
        int maxNum = 0;
        int maxProductSum = 0;
        while(n!=0){
            int r = n%10;
            maxProductSum = max(maxProductSum,r*maxNum);
            maxNum = max(r,maxNum);
            n = n/10;
        }
        return maxProductSum;
    }
};