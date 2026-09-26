class Solution {
public:
    bool ispal(string w)
    {
        int k = w.size();
        if(k==1) return true;
        for(int i=0; i<k; i++){
            if(w[i]!=w[k-i-1]) {
                return false;
            }
        }
        return true;
    }  
    string firstPalindrome(vector<string>& words) {
    int n = words.size();
    for(int i = 0; i<n; i++){
        bool flag = ispal(words[i]);
        if(flag == true) return words[i];
    }    
    return "";
    }
};