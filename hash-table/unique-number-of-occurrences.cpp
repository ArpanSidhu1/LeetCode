#include <vector>
#include <algorithm>

class Solution {
public:
    bool uniqueOccurrences(std::vector<int>& arr) {
        int n = arr.size();
        std::vector<int> freq(2001, 0); // Assuming the range of elements is [-1000, 1000]

        for (int i = 0; i < n; ++i) {
            freq[arr[i] + 1000]++; // Adjust index to handle negative values
        }

        std::sort(freq.begin(), freq.end());

        for (int i = 0; i < 2000; ++i) {
            if (freq[i] != 0 && freq[i] == freq[i + 1]) {
                return false;
            }
        }

        return true;
    }
};
