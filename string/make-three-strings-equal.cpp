class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
    int n1 = s1.size(); int n2 = s2.size(); int n3 = s3.size();
    int len = min({n1,n2,n3});
    int sum = n1 + n2 + n3;
    if(s1[0]!=s2[0] || s2[0]!=s3[0]){
        return -1;
    }
    for(int i=0; i<len; i++){
        if(s1[i]==s2[i] && s1[i]==s3[i]){
            sum-=3;
        }
        else{
            break;
        }
    }
    return sum;
    }
};