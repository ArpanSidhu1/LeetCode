class Solution {
public:
    int minOperations(string s) {
        // applying rotation to the whole string.
        int n = s.size();
        int ans = INT_MAX;

        for(int r = 0; r < n; r++){
            int rot = r;
            for(int i=0; i<n/2; i++){

                char left = s[(i+r)%n];
                char right = s[((n-1-i)+r)%n];
                int m1 = (right - left + 26) % 26;
                int m2 = (left - right + 26) % 26;

                // Total Moves to Make a string pallindrome after rotation.        
                rot += min(m1,m2);
            }

            ans = min(ans,rot);
        }   
        
        return ans;
    }
};