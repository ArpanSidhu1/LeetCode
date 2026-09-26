class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();  
        int i = 0; 
        int j = 0;  
        int maxi = 0;
        int k = 1; // for deletion of one element.

        while(j < n) {
            if(nums[j] == 1) {
                maxi = max(maxi, j - i + 1);
                j++;
            }
            else if(nums[j] == 0 && k == 1) {
                k -= 1; 
                j++;
                maxi = max(maxi, j - i);
            }
            else if(nums[j] == 0 && k == 0) {
                if(nums[i] == 0) 
                    k += 1;
                i++;
                maxi = max(maxi, j - i);
            }
        }
        
        return maxi - 1;
    }
};
