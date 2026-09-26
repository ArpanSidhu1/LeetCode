class Solution {
public:

    int recAtoi(string s,int index,int sign,int n,long result){
        if(!(index<n)){
            return result;
        }
        if(s[index] == '-' || !isdigit(s[index])){
            return result;
        }
        result = result*10 + s[index] - '0';
        if(sign == -1 && result*sign<INT_MIN){
            return INT_MIN;
        }
        if(sign == 1 && result*sign>INT_MAX){
            return INT_MAX;
        }
        result = recAtoi(s,index+1,sign,n,result);
        return result;
    }

    int myAtoi(string s) {
        string strNew = "";
        int n = s.size();
        int i = 0;

        if(s[i] == ' '){
            while(s[i] == ' '){
                i++;
            }
        }
        s = s.substr(i);
        int maxNum = INT_MAX;
        int minNum = INT_MIN;

        int sign = 1;
        i=0;
        if(i<n && s[i] == '-'){
            sign = -1;
        }
        i = (s[i] == '+' || s[i] == '-')? 1 : 0;
        long ans = recAtoi(s,i,sign,s.length(),0);
        return ans*sign;
    }
};