class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {
        
        map<int,int>mp;
        int n = nums.size();
        if(n==1)return 1;
        int maxi =0;
        for(auto it : nums){
            mp[it]++;
        }
        for(auto i : mp){
            maxi = max(maxi,i.second);
        }
        int rem = n-maxi;//no. of elements left
        //now if the maximum freq is less then remaining element then       just check no. of element is odd or even
        if(maxi<rem)return n%2;
        return maxi-rem;
    }
};