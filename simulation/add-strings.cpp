class Solution {
public:
    string addStrings(string num1, string num2) {
    string ans;
    int n1 = num1.size()-1;
    int n2 = num2.size()-1;
    int carry=0;
    int sum = 0;
    int sum1 = 0;
    while(n1>=0 || n2>=0){
    sum1 = 0;
    sum = carry;
    if(n1>=0){
        sum = sum+(num1[n1]-48);
        n1--;
    }
    if(n2>=0){
        sum = sum+(num2[n2]-48);
        n2--;
    }
    sum1 = sum1 + sum%10;
    carry = sum/10;
    ans.push_back(sum1+48); 
    }   
    if(carry){
        ans.push_back(carry+48);
    }
    reverse(ans.begin(),ans.end());
    return ans;
    }
};