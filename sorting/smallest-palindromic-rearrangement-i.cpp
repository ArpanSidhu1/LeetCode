class Solution {
public:
    string smallestPalindrome(string s) {
    // if it is a single string then it is itself a lexicographicallly smallest palindrome.
    map<char,int> mp;
    for(int i : s){
        mp[i]++; // counted the number of alphabets present.
    } 
    string first = "";
    string mid = "";
    for(auto k : mp){
        // if it is even.
        if(k.second%2==0){
            int kNums = k.second/2;
            while(kNums--){
                first+=k.first;
            }
        }else if(mid==""){
            mid += k.first; // storing the character as this character will be mid.
            int kNums = k.second/2;
            while(kNums--){
                first+=k.first;
            }
        }
    }
    string end = first;
    reverse(end.begin(),end.end());
    return first+mid+end;
    }
};