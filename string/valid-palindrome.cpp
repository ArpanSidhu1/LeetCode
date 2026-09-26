class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> v;

        for (char c : s) {
            if (isalnum(c)) {
                v.push_back(tolower(c));
            }
        }

        vector<char> reversed(v.rbegin(), v.rend());
        return v == reversed;
    }
};
