class Solution {
public:
    int titleToNumber(string columnTitle) {
    int res=0;
    for(int i=0; i<columnTitle.size(); i++){
        res*=26; // at every 26 round the value changes A B C.
        res+=(columnTitle[i]-'A'+1); // to find out the value at the position and add it to the resultant.
        // first the value of c will be calculate.
        // second the value of b after c gets multiplied by 26
        // third the value of c after b gets muliplied by 26
    }
    return res;
    }
};