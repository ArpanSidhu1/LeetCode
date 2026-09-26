class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        int n = matches.size();
        set<int> st;
        
        // Find the maximum index used in matches
        int maxIndex = 0;
        for (const auto& match : matches) {
            maxIndex = max(maxIndex, match[1]);
        }

        // Increase the size of freq to cover all possible indices
        vector<int> freq(maxIndex + 1, 0);

        for (int i = 0; i < n; i++) {
            st.insert(matches[i][0]);
        }

        for(int i = 0; i < n; i++) {
            freq[matches[i][1]]++;
            if (st.find(matches[i][1]) != st.end()) {
                st.erase(matches[i][1]);
            }
        }

        vector<vector<int>> result;
        vector<int> v1(st.begin(), st.end());
        vector<int> v2;

        for (int i = 0; i <= maxIndex; i++) {
            if (freq[i] == 1) {
                v2.push_back(i);
            }
        }

        sort(v2.begin(), v2.end());

        result.push_back(v1);
        result.push_back(v2);

        return result;
    }
};
