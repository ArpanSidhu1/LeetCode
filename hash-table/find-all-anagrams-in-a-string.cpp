class Solution {
public:
    bool match(string s,string t)
    {
        vector<int> count(26,0);
        for(int i=0; i<s.size(); i++){
            count[s[i]-'a']++;
            count[t[i]-'a']--;
        }
        for(int i=0; i<count.size(); i++){
            if(count[i]!=0){
                return false;
            }
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
    int i = 0; 
    vector<int> result;
    while(i+p.size()<=s.size())
    {
        string temp = s.substr(i,p.size());
        bool flag = match(temp,p);
        if(flag==true)
        {
        result.push_back(i);
        }
    i++;    
    }   
    return result; 
    }
};