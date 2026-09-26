class Solution {
public:
    int lengthOfLastWord(string s) {
    int l=s.size()-1;   
    while(l>=0 && s[l]==' '){
        l--;
    }
    int length = 0;
    while(l>=0 && s[l]!=' '){
        length++;
        l--;
    }
    return length;
    }
};