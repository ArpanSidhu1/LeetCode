class Solution {
public:
    int largestInteger(int n, int s) {
        // the farthest the n digit sum can reach is n*9.
        if(n*9 < s) return -1;

        int result = 0;
        int sequence = s;

        for(int i=0; i<n; i++){
            int k1 = min(sequence,9);
            result = result*10 + k1;
            sequence -= k1;
        }
        
        return result;
    }
};