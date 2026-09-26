class Solution {
public:
    int sumCounts(vector<int>& nums) {
     int n = nums.size();
        int result = 0;

        for (int i = 0; i < n; i++) {
            int discount = 0;
            std::vector<bool> visited(101, false);

            for (int j = i; j < n; j++) {
                if (!visited[nums[j]]) {
                    visited[nums[j]] = true;
                    discount++;
                }
                result += discount * discount;
            }
        }
        return result;
}
};