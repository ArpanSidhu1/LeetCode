class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(),nums.end());
    int sum = INT_MAX;
    int n = nums.size();
    int min_difference = INT_MAX;
    for(int i = 0; i<n-2; i++){
        int left = i+1;
        int right = n-1;
        while(left<right){
            int c = nums[i] + nums[left] + nums[right];
            int diff = abs(c - target);
            if(diff<min_difference){
                min_difference = diff;
                sum = c;
            }

            if(c>target){
                right--;
            }
            else{
                left++;
            }
        }
    }  
    return sum; 
    }
};