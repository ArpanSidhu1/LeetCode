class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int c = 0;
        for(auto pattern:patterns){
            if(word.contains(pattern)){
                c+=1;
            }
        }
        return c;
    }
};