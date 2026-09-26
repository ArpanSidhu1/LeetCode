class Solution {
public:
    int maxDistance(string moves) {
        int c = 0;
        unordered_map<char, int> mp;
        for(auto x: moves){
            mp[x]++;
        }
        
        c = c + abs(mp['L'] - mp['R']);
        c = c + abs(mp['U'] - mp['D']);
        c = c + mp['_'];

        return c;
    }
};