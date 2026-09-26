class Solution {
public:
    int compress(vector<char>& chars) {
    int n = chars.size(); vector<char> result;
    for(int i=0; i<n; i++){
        int c = 1;
        if(i==n-1 || chars[i]!=chars[i+1]) result.push_back(chars[i]); 
        else{
            while(i+1<n && chars[i]==chars[i+1]){
                c+=1;
                i++;
            }
            result.push_back(chars[i]);
            int k = result.size();
            if(c>1){
                string countstr = to_string(c);
                for(char o: countstr)
                result.push_back(o);
                }
            }
    }
    chars=result;
    return result.size();
    }
};