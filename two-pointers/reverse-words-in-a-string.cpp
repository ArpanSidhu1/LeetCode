class Solution {
public:
string reverseWords(string s) {
        vector<string> wordArr;
        int n = s.size();
        int c = 0;
        string word = "";
        for(int i=0; i<n; i++){
            if(s[i]!= ' '){  
                word+=s[i];
                c++;
            }
            if(s[i] == ' ' && c!=0){
                wordArr.push_back(word);
                word = "";
                c = 0;
            }
        }
        wordArr.push_back(word);
        string ans = "";
        int k = wordArr.size();
        for(int i=k-1; i>=0; i--){
            if(ans.size() != 0){
                ans += ' ';
            }
            ans+=wordArr[i];

        }
        cout<<" Ans : "<<ans;
        return ans;
    }
};