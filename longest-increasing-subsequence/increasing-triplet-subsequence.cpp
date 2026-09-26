class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) // If the size of the array is less than 3, it's impossible to have an increasing triplet
            return false;

        int small = INT_MAX; // Initialize the smallest element seen so far
        int big = INT_MAX;   // Initialize the second smallest element seen so far

        for (int num : nums) {
            if (num <= small) {
                small = num; // Update small if the current number is smaller or equal
            } else if (num <= big) {
                big = num; // Update big if the current number is smaller or equal to big but greater than small
            } else {
                return true; // If we encounter a number greater than both small and big, we have found an increasing triplet
            }
        }
        return false; // If no increasing triplet is found
    }
};