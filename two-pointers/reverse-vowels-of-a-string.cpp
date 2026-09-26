class Solution {
public:
    string reverseVowels(string s) {
        int n = s.size();
        int j = n - 1; // Initialize j to the end of the string

        for (int i = 0; i < n; i++) {
            if (i >= j) {
                // All the vowels have been swapped, break the loop
                break;
            }

            if (isVowel(s[i])) {
                while (!isVowel(s[j])) {
                    j--; // Move j towards the start of the string
                }

                swap(s[i], s[j]);
                j--; // Move j one step back to find the next vowel
            }
        }
        return s;
    }

    bool isVowel(char c) {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    }
};