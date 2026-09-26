class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long largest = LLONG_MIN;
        long long largest1 = LLONG_MIN;
        long long largest2 = LLONG_MIN;

        for (int num : nums) {
            if (num > largest) {
                largest2 = largest1;
                largest1 = largest;
                largest = num;
            } else if (num > largest1 && num != largest) {
                largest2 = largest1;
                largest1 = num;
            } else if (num > largest2 && num != largest1 && num != largest) {
                largest2 = num;
            }
        }

        if (largest2 == LLONG_MIN) {
            return static_cast<int>(largest);
        } else {
            return static_cast<int>(largest2);
        }
    }
};
