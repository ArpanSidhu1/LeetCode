class Solution {
public:
    int longestString(int x, int y, int z) {
    if(x==y)
    {
        return z*2 + (x*2)*2;
    }
    return z*2 + (min(x,y)*2)*2+2;
    }
};