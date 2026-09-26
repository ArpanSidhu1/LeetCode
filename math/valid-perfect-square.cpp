class Solution {
public:
    bool isPerfectSquare(int num) {
    int max = 0;
    for(int i=1; i<=100000; i++){
        if(num%i==0 && i>max){
            if(i*i==num){
                return true;
            }
        }
    }   
    return false;
    }
};