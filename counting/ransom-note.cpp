class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
    int k = 0;
    for(int i = 0; i<magazine.size(); i++){
        for(int j=0; j<ransomNote.size(); j++){
            if(magazine[i]==ransomNote[j]){
                ransomNote[j]='~';
                k++;
                break;
            }    
        }
    if(k==ransomNote.size()) {
            return true;
        }    
    }
    return false;
    } 
};