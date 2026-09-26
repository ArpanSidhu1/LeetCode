class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0; int right = height.size()-1;
        int totalWater = 0;
        int leftMax = 0; int rightMax = 0;
        while(left != right){
            if(height[left]<=height[right]){
                // Process Left Side.
                if(height[left]>leftMax) leftMax = height[left];
                else {
                    totalWater += leftMax - height[left];
                }
                left++;
            }else{
                // Process Right Side.
                if(height[right]>rightMax){
                    rightMax = height[right];
                }else{
                    totalWater += rightMax - height[right];
                }
                right--;
            }
        }
        return totalWater;
    }
};