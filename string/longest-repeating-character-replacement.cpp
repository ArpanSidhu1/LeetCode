class Solution {
public:
    int characterReplacement(string s, int k) {
    int n = s.size();
    int l = 0 ,r = 0 ,maxi = 0,ans = -1;
    unordered_map<char,int> mp;
    while(r<n){
        mp[s[r]]++;
        maxi = max(maxi,mp[s[r]]);
        if((r-l+1)-maxi>k) // not possible
        {
        mp[s[l]]--;
        l++;
        }
        ans = max(ans,(r-l+1));
        r++;
    }
    return ans;
    }
};