class Solution {
public:
    int maximumLength(string s) {
        int n=s.length();
        int ans=0;
        for(char c='a';c<='z';c++){
            int m1=0,m2=0,m3=0;
            for(int i=0;i<n;){
                if(s[i]!=c){
                    i++;continue;
                }
                int j=i;
                int cnt=0;
                for(;j<n&&s[i]==s[j];j++){
                    cnt++;
                    if(cnt>m3){
                        m1=m2;
                        m2=m3;m3=cnt;
                    }else if(m2<cnt){
                        m1=m2;
                        m2=cnt;
                    }
                    else if(cnt>m1)m1=cnt;
                    
                }
                i=j;
            }
            ans=max(ans,m1);
        }
        return ans==0?-1:ans;
    }
};