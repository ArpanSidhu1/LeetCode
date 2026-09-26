class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
    long long sum1 = 0,sum2= 0;
    int c1 = 0,c2 =0;
    for(int x : nums1){
        sum1 += x;
        if(x==0)
        c1++;
    }    
    for(int x : nums2){
        sum2+=x;
        if(x==0)
        c2++;
    }
    if(c1==0 && sum2+c2>sum1-c1)
        return -1;
    if(c2==0 && sum1+c1>sum2-c2)
        return -1;

    return max(sum1+c1,sum2+c2);    
    }
};