class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
    int n = nums.size();
    int missing = -1;
    int dup = -1;
    for(int i=1; i<=n; i++){
        int c = 0;
        for(int j=0; j<n; j++){
            if(nums[j]==i) {
            c++;
            }
        }
        if(c==2){
        dup = i;
        } 
        if(c==0) {
        missing = i;
        }
    }   
    return {dup,missing};
    }
};