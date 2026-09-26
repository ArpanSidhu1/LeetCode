class Solution {
public:
    bool isHappy(int n) {
        // Call another function from within isHappy
        return helper(n);
    }

private:
    bool helper(int n) {
    int r,sum=0;
    while(n!=0){
        r = n%10;
        sum = sum+r*r;
        n=n/10;
        }
    if (sum == 1) {
            return true;
        } else if (sum == 4) {
            // If sum reaches 4, it will never become 1, so return false
            return false;
        } else {
            // Recursively call helper function
            return helper(sum);
        }
    }
};