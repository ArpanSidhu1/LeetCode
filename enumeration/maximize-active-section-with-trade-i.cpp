class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int zeroCount = 0;
        int groupCount = 0;
        int maxZeroGroup = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='0'){
                int j = i;
                int count = 0;
                while(s[j]=='0'){
                    count++;
                    j++;
                }
                maxZeroGroup = max(maxZeroGroup,zeroCount+count);
                zeroCount = count;
                i=j;
                groupCount++;
            }
        }

        int totalCount = 0;
        for(auto x : s){
            if(x=='1'){
                totalCount++;
            }
        }

        cout<<"Group Count : "<<groupCount;

        if(groupCount>1){
            totalCount += maxZeroGroup;
        }

        return totalCount;
    }
};