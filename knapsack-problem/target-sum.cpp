#include <vector>
using namespace std;

class Solution {
public:
    int count(vector<int>& nums, int sum, int n) {
        if (n == 0) {
            return sum == 0 ? 1 : 0;
        }

        // Two choices: include the current number or exclude it
        return count(nums, sum - nums[n - 1], n - 1) + count(nums, sum + nums[n - 1], n - 1);
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        return count(nums, target, n);
    }
};
