class Solution {
public:
    long long sumAndMultiply(int n) {
        int sum = 0;
        long long newInteger = 0;
    
        while(n!=0){
            int r = n%10;
            if(r!=0){
                newInteger = newInteger*10 + r;
                sum += r;
            }
            n = n/10;
        }
    
        long long revNumber = 0;
        while(newInteger!=0){
            int k = newInteger%10;
            revNumber = revNumber*10 + k;
            newInteger = newInteger/10;
        }
    
        return revNumber*sum;
    }
};