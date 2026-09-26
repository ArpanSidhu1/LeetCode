class Solution {
public:
    long long numberOfSubstrings(string s) {
        int lastSeen[3] = {-1, -1, -1};
        long long count = 0;
        
        for (int right = 0; right < s.size(); right++) {
            lastSeen[s[right] - 'a'] = right;
            
            int minLast = min({lastSeen[0], lastSeen[1], lastSeen[2]});
            
            if (minLast != -1) {
                count += (minLast + 1);
            }
        }
        
        return count;
    }
};