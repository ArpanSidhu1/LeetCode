class Solution {
public:
void generator(string &result, int n){
    if(n==1){
        result+="1";
        return;
    }
    generator(result,n-1);
    string current = "";
    int i = 0;
    while (i < result.size()) {
        char digit = result[i];
        int count = 1;
        i++;
        
        // Count consecutive identical digits
        while (i < result.size() && result[i] == digit) {
            i++;
            count++;
        }
        
        // Append the count and digit to the current result
        current += to_string(count) + digit;
    }
    
    result = current;
}
    string countAndSay(int n) {
    string result;
    generator(result,n); 
    return result; 
    }
};