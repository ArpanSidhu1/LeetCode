class Solution {
public:
    int numberOfSpecialChars(string word) {
        map<char,int> mp;
        for(auto x : word){
            mp[x]++;
        }
        int c = 0;
        for(auto x : word){
            char k = x;
            if(mp[tolower(k)]>=1 && mp[toupper(k)]>=1){
                c++;
                mp.erase(k);
                mp.erase(toupper(k));
            }

        }
        return c;
    }
};