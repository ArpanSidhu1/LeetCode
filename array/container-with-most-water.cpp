class Solution {
public:
    int maxArea(vector<int>& height) {
        int right = height.size()-1;
        int left  = 0;
        int maxWater = 0;

        while(left<right){
            maxWater = max(maxWater,min(height[left],height[right]) * (right-left));
            if(height[left]>height[right]) right --;
            else left++;
        } 

        return maxWater;
    }
};