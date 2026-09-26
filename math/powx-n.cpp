class Solution {
public:
    double recPow(double x,long long power,double result,int type){
        if(power==0){
            return result;
        }
        if(power%2==1){
            result *= x;
        }
        x*=x;
        power/=2;
        return recPow(x,power,result,type);
    }

    double myPow(double x, int n) {
        double result = 1;
        long long power = n;
        int type = 1;
        if(power<0){
            x = 1/x;
            power = -power;
        }
        return recPow(x,power,result,type);
    }
};