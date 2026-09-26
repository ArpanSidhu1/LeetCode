class Solution {
public:
    int countSeniors(vector<string>& details) {
    int c = 0;
    string age = "";
    int k = details.size();
    for(int i=0; i<k; i++){
        int n = details[i].size();
        age += details[i][n-4];
        age += details[i][n-3];
        if(stoi(age)>60) c+= 1;
        age = "";
    }  
    return c;
    }
};