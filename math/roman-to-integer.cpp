class Solution {
public:
    int romanToInt(string s) {
        unordered_map<string, int> ump;
        ump["I"] = 1;
        ump["V"] = 5;
        ump["X"] = 10;
        ump["L"] = 50;
        ump["C"] = 100;
        ump["D"] = 500;
        ump["M"] = 1000;
        ump["IV"] = 4;
        ump["IX"] = 9;
        ump["XL"] = 40;
        ump["XC"] = 90;
        ump["CD"] = 400;
        ump["CM"] = 900;
        ump["$"] = 0;
        int n = s.size();
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'I' && i + 1 < n) {
                if (s[i + 1] == 'V') {
                    sum += ump["IV"];
                    s[i + 1] = '$';
                    continue;
                }
                if (s[i + 1] == 'X') {
                    sum += ump["IX"];
                    s[i + 1] = '$';
                    continue;
                }
            } else if (s[i] == 'X' && i + 1 < n) {
                if (s[i + 1] == 'L') {
                    sum += ump["XL"];
                    s[i + 1] = '$';
                    continue;
                }
                if (s[i + 1] == 'C') {
                    sum += ump["XC"];
                    s[i + 1] = '$';
                    continue;
                }
            } else if (s[i] == 'C' && i + 1 < n) {
                if (s[i + 1] == 'D') {
                    sum += ump["CD"];
                    s[i + 1] = '$';
                    continue;
                }
                if (s[i + 1] == 'M') {
                    sum += ump["CM"];
                    s[i + 1] = '$';
                    continue;
                }
            } 
            string ch(1, s[i]);
            sum += ump[ch];
        }
        return sum;
    }
};