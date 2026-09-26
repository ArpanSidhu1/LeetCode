class Solution {
public:
    vector<string> letterCombinations(string digits) {
    vector<string> result;
    if(digits.empty()){
        return result;
    }
    unordered_map<char,string> letter_map = {
        {'2',"abc"},
        {'3',"def"},
        {'4',"ghi"},
        {'5',"jkl"},
        {'6',"mno"},
        {'7',"pqrs"},
        {'8',"tuv"},
        {'9',"wxyz"}
    };
    generatecombinations(result,letter_map,digits,"",0);
    return result;
    }
    void generatecombinations(vector<string>& result,unordered_map<char,string>& map,const string& digits,string current,int index)
    {
         if(index==digits.size()){
             result.push_back(current);
             return ;
         }

         char digit = digits[index];
         string letters = map[digit];
         for(char letter : letters){
             generatecombinations(result,map,digits,current+letter,index+1);
         }
    }
};