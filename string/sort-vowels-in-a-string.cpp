class Solution {
public:
    string sortVowels(string s) {
    int size = s.size();
    int n = s.size();
    vector<char> v;
    vector<int> position;
    for(int i=0; i<n; i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
        v.push_back(s[i]);
        position.push_back(i);
        }
    }
    sort(v.begin(),v.end());
    string result = s;
    for(int i=0; i<position.size(); i++){
        result[position[i]] = v[i];
    }   
    return result;
    }
};