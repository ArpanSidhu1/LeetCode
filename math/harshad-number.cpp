class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
    int sum; int r;
    int t = x;
    while(x!=0){
    r = x%10;
    sum = sum + r;
    x = x/10;
    }    
    if(t%sum==0) return sum;
    return -1;
    }
};