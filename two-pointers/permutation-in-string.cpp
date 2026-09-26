class Solution {
public:
        bool match(const std::string& s1, const std::string& s2) {
        int n = s1.size();

        // Check if the lengths of the two strings are different
        if (n != s2.size()) {
            return false;
        }

        std::unordered_map<char, int> charFreq(26);

        // Update the frequency map for each character in both strings
        for (int i = 0; i < n; i++) {
            charFreq[s1[i]]++;
            charFreq[s2[i]]--;
        }

        // Check if all characters have frequency 0
        for (const auto& pair : charFreq) {
            if (pair.second != 0) {
                return false;
            }
        }

        return true;
    }

    bool checkInclusion(const std::string& s1, const std::string& s2) {
        int n = s1.size();
        int m = s2.size();

        // Check if the lengths of the two strings are invalid
        if (n > m) {
            return false;
        }

        for (int i = 0; i <= m - n ; i++) {
            if (match(s1, s2.substr(i, n))) {
                return true;
            }
        }

        return false;
    }
};