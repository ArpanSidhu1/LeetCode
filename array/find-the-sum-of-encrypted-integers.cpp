class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
    int sum = 0;
    for(auto x : nums){
        int maxi = INT_MIN; int c = 0;
        while(x){
        maxi = max(maxi,x%10);
        c++;
        x = x/10;
        }
        int y =0;
        while(c){
            y = y*10 + maxi; 
            c--;
        }
        sum += y;
    }    
    return sum;
    }
};