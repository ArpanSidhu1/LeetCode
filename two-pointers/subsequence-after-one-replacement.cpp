class Solution {
public:
    bool canMakeSubsequence(string s, string t) {
        int n = s.size(); // size of s (n).
        int m = t.size(); // size of t (m).

        vector<int> pref(n+1,-1); // to check if prefix is present in t.
        vector<int> suff(n+1,-1);   // to check if suffic is present in t.

        int p = 0;
    
        // Handling the Prefix.
        for(int i=0; i<n; i++){
            // run a loop in t until we find a valid prefix.
            while(p<m && t[p]!=s[i]) p++;
            if(p == m){
                for(int j=i+1; j<=n; j++) pref[j] = m;
                break;
            }
            // holding the index at which it is found.
            pref[i+1] = p++;
        }

        // Handling the suffix part.
        p = m-1;
        suff[n] = m;
        for(int i=n-1; i>=0; i--){
            while(p>=0 && t[p]!=s[i]) p--;
            if(p<0) break; // as we cannot go beyond it to match.
            suff[i] = p--;
        }   

        for(int i=0; i<n; i++){
            if(pref[i] == m || suff[i+1] == -1) continue;
            if(pref[i] + 1 < suff[i+1]) return true;
        }

        return false;
    }
};