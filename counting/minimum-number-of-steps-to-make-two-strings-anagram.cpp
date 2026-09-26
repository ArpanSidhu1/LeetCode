class Solution {
public:
    int minSteps(string s, string t) {
    vector<int> nums(26,0);
    for(int i=0; i<s.size(); i++){
        nums[s[i]-'a']++;
        nums[t[i]-'a']--;
    }
    int ans = 0;
    for(int i=0; i<26; i++){
        ans += max(0,nums[i]);
    }
    return ans;
    }
};