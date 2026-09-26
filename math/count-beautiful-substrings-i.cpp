class Solution {
public:
    int beautifulSubstrings(string s, int k) {
    int n = s.size();
    int ans = 0;
    for(int i=0; i<n; i++){
        int v = 0;
        int c = 0;
        for(int j=i; j<n; j++){
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u'){
                v+=1;
            }
            else{
                c+=1;
            }
        if(v==c && (v*c)%k==0){
            ans+=1;
        }    
        }
    }
    return ans;
    }
};