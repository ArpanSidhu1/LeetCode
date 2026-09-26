class Solution {
public:
    bool isGood(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int n = nums.size();
    int c =0;
    int t;
    int max1 = INT_MIN;
    for(int i=0; i<n; i++){
        if(i+1<n && nums[i]==nums[i+1]){
            c++;
            t = nums[i];
        }
        max1 = max(nums[i],max1);
    }
    if(c==1 && max1+1 == n && max1==t){
        return true;
    }  
    return false;
    }
};