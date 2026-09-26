class Solution {
public:
    int divide(int dividend, int divisor) {
    int ans=0;
    if(dividend==INT_MIN && divisor == -1) { return INT_MAX ;}
    if(dividend==INT_MIN && divisor == 1)  { return INT_MIN ;}
    long long dd = abs(dividend);
    long long dv = abs(divisor);
    while(dv<=dd){
        long long sum = dv,count = 1;
        while(sum<=dd-sum){
            sum  +=sum;
            count+=count;
        }
        dd = dd-sum;
        ans += count;
    }  
    if(divisor>0 && dividend<0 || divisor<0 && dividend>0 ) return -ans;
    return ans;
    }
};