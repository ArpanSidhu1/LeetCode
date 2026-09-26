class Solution {
public:
    int maxDepth(string s) {
        int maxCount = 0;
        int count = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '('){
                count++;
                maxCount = max(maxCount,count);
            }
            if(s[i] == ')'){
                count--;
            }
        }
        return maxCount;
    }
};