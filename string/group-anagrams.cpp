class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> ump;
        for(auto x : strs){
            vector<int> frq(26,0);
            for(char c : x){
                // To convert into an Index.
                frq[c-'a']++;
            }

            string key = "";
            for(char k : frq){
                // key+="#";
                key+=k;
            }
            ump[key].push_back(x);
        }
        vector<vector<string>> result;
        for(auto x : ump){
            result.push_back(x.second);
        }
        return result;
    }
};