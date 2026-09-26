class Solution {
public:
    int longestPalindrome(string s) {
    int n = s.size();
    int c = 0;
    int c1 = 0;
    for(int i=0; i<n; i++)
    {
        if(s[i]!='|')
      for(int j=i+1; j<n; j++){
         if(s[i]==s[j]){
             s[j]='|';
             c+=2;
             c1+=1;
             break;
         }
      }
    }    
    if(n%2==0){
        if(c<n){
        return c+1;
        }
        else{
            return c;
        }
    }
    else{
        return c+1;
    }
    return 0;
    }
};