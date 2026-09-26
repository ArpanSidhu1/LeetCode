class Solution {
public:
    long long customPow(int base,int exp,int mod)
    {
        long long result = 1;
        while(exp>0){
            if(exp%2==1){
                result = (result*base)%mod;
            }
            base = (base*base)%mod;
            exp /= 2;
        }
        return result;
    }
    vector<int> getGoodIndices(vector<vector<int>>& variables, int target) {
    vector<int> ans;
    int i = 0;
    for(auto row :variables){
        long long e1 = customPow(row[0],row[1],10);
        long long e2 = customPow(e1%10,row[2],row[3]);

        if(e2==target){
            ans.push_back(i);
        }

        i++;
    }
    return ans;
    }
};