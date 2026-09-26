class Solution {
public:
    int hammingWeight(uint32_t n) {
    int c=0;
    while (n>0){
    n &= (n-1); // what we are doing is adding (&) the n and n-1 bits
    c++; // and by adding the digits only the digits with 1 are transformed into 0
    } // and we are increasing the count operator
    return c;
    }
};