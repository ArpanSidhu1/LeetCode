class Solution {
public:
    bool checkbit(int n, int n2) {
        int c1 = 0, c2 = 0;
        while (n != 0) {
            int r = n % 2;
            if (r == 1) c1++;
            n = n / 2;
        }
        while (n2 != 0) {
            int r = n2 % 2;
            if (r == 1) c2++;
            n2 = n2 / 2; // Corrected variable to n2
        }
        return c1 == c2;
    }

    bool canSortArray(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                bool flag = checkbit(nums[i], nums[i + 1]);
                if (flag) {
                    swap(nums[i], nums[i + 1]);
                    for (int j = i; j >= 1; j--) {
                        if (nums[j] < nums[j - 1]) {
                            bool flag = checkbit(nums[j], nums[j - 1]);
                            if (flag) {
                                swap(nums[j], nums[j - 1]);
                            }
                        }
                    }
                }
            }
        }
        return is_sorted(nums.begin(), nums.end());
    }
};
