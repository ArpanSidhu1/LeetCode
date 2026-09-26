class Solution {
public:
    int countValidPrefixes(string s) {
        int count = 0;
        int zeroes = 0;
        int ones = 0;
        for(int i=0; i<s.size(); i++){
            (s[i] == '1') ? ones++ : zeroes++;
            if(abs(zeroes-ones)<=1){
                count++;
            }
        }
        return count;
    }
};