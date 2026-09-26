class Solution {
public:
    int countDigits(int num) {
        int count = 0;
        int number = num;
        while(number!=0){
            int k = number%10;
            if(num%k == 0){
                count += 1;
            }
            number = number/10;
        }
        return count;
    }
};