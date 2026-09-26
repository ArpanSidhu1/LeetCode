class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        vector<int> charIndex(257,0);
        string temp = "";
        int maxLength = 0;
        int left = 0;
        int right = 0;

        for(int i=0; i<s.size(); i++){
            
            if(charIndex[s[i]]!=0 && left<charIndex[s[i]]) {
                left = charIndex[s[i]];
            }
            temp += s[i];
            charIndex[s[i]] = i+1; // Boundary Issue.
            right++;
            maxLength = max(maxLength,(right-left));
        }

        return maxLength;
    }
};