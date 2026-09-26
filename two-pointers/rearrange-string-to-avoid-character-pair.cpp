class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        unordered_map<char,int> mp;
        string ansString;
        
        // Stored the Frequency.
        for(auto k : s){
            mp[k]++;
        }
        while(mp[y]!=0){
            ansString += y;
            mp[y]--;
        }

        while(mp[x]!=0){
            ansString += x;
            mp[x]--;
        }

        for (auto &p : mp) {
            ansString.append(p.second, p.first);
        }
        
        return ansString;
    }
};