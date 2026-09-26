class Solution {
public:
    bool pair(int num1,int num2){
    int length = max(log10(num1)+1,log10(num2)+1);
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int r,r1;
    for(int i=0; i<length; i++){
    r = num1%10;
    r1 = num2%10;
    max1 = max(r,max1);
    max2 = max(r1,max2);
    num1 = num1/10;
    num2 = num2/10;
    }
    if(max1==max2){
        return true;
    }
    return false;
    }
    int maxSum(vector<int>& nums) {
        int max1 = -1;
        int n = nums.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                bool flag = pair(nums[i],nums[j]);
                if(flag==true){
                    max1 = max(nums[i]+nums[j],max1);
                }
            }
        }
    return max1;    
    }
};