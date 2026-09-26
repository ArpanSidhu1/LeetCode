class Solution {
public:
    int maxStart = 0;

    int maxLen = 0;

    string longestPalindrome(string s) {
        if(s.size() == 1) return s;
        int n = s.size();
        for(int i=0; i<n; i++){
            expandFromMiddle(s,i,i);
            expandFromMiddle(s,i,i+1);
        }
        return s.substr(maxStart,maxLen);
    }

    void expandFromMiddle(string s,int left,int right){
        int length = 0;
        while(left>=0 && right<s.size() && s[left]==s[right]){
            left--;
            right++;
        }
        length = right-left-1;
        cout<<"Length : "<<length<<endl;
        if(length>maxLen){
            maxStart = left+1;
            maxLen = length;
        }
    }

};