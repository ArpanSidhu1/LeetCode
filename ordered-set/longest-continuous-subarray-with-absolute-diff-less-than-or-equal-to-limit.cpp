class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        deque<int> maxDq; // Maximum Element at the Top.
        deque<int> minDq; // Minimum Element at the Top.

        int start = 0;
        int n = nums.size();
        int maxLen = 1;
        for(int end = 0; end<n; end++){

            // Bully Rule. 
            // Removing all the elements that are smaller then the current element from the back.
            while(!maxDq.empty() && nums[maxDq.back()]<=nums[end]){
                maxDq.pop_back();
            }

            maxDq.push_back(end);

            // Bully Rule.
            // Removing all the elements that are greater then the current element from the back.
            while(!minDq.empty() && nums[minDq.back()]>=nums[end]){
                minDq.pop_back();
            }

            minDq.push_back(end);

            // if their limit is greater then the current limit.
            // we increase the start pointer until we found the limit in which their difference is less then limit.
            while(abs(nums[maxDq.front()]-nums[minDq.front()]) > limit){
                start++;
                // Expiration Rule in Max Queue.
                if(maxDq.front()<start){
                    maxDq.pop_front();
                }
                // Expiration Rule in Min Queue.
                if(minDq.front()<start){    
                    minDq.pop_front();
                }
            }

            maxLen = max(maxLen,end-start + 1);
        }
        return maxLen;
    }
};