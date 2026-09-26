#include <vector>
using namespace std;

class Solution {
public:
    bool isPrime(int x) {
        if (x < 2) {
            return false;
        }
        for (int i = 2; i * i <= x; i++) {
            if (x % i == 0) {
                return false;
            }
        }
        return true;
    }

    vector<vector<int>> findPrimePairs(int n) {
        vector<vector<int>> result;
        
        for (int i = 2; i <= n / 2; i++) {
            if (isPrime(i) && isPrime(n - i)) {
                result.push_back({i, n - i});
            }
        }
        
        return result;
    }
};
