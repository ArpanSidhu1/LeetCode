class Solution {
public:
    string largestOddNumber(string num) {
       int n = num.size();
       while(!num.empty()){
            char temp = num.back();
            int k = int (temp);
            if(k%2!=0){
                return num;
            }
            num.pop_back();
       }    
       return ""; 
    }
};