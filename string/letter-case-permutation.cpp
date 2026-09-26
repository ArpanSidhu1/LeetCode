class Solution {
public:
    void generator(string input,string output,int i,vector<string>& result)
    {
        if(i==input.size()){
        result.push_back(output);
        return;
        }
        if(isdigit(input[i])){
            generator(input,output+input[i],i+1,result);
        }
        if(isalpha(input[i])){
            generator(input,output+char(tolower(input[i])),i+1,result);
            generator(input,output+char(toupper(input[i])),i+1,result);
        }
    }
    vector<string> letterCasePermutation(string s) {
    vector<string> result;
    string output;
    generator(s,output,0,result); 
    return result;  
    }
};