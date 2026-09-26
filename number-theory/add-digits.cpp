class Solution {
public:
int digithelp(int n){
    int r;
    int sum=0;
    while(n!=0){
        r = n%10;
        sum = sum + r;
        n = n/10;
    }
    return sum;
}
    int addDigits(int num) {
    while(num>9){
        num = digithelp(num);
    }
    return num;
    }
};