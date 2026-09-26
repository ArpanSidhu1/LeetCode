class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> result;
        int n = nums.size();

        for(int i=0; i<n; i++){

            // The "Retirement" Rule.
            // Every Element is at the top for a particular window.
            // if the window passed it has to be kicked out.
            if(!dq.empty() && dq.front()<i-k+1){
                dq.pop_front();
            }    

            // The "Bully" Rule (Clean the Back)
            // a new element comes all the elements which are less then him will get cleared from the back.
            // it can go at the start too if it is greater then all the elements and reach the front at once.
            while(!dq.empty() && nums[dq.back()]<=nums[i]){
                dq.pop_back();
            }

            // The "ID Badge" Rule.
            // this is required to track the element expiration time and it's number to which it is assosiated.
            dq.push_back(i);
            if(i>=k-1){
                result.push_back(nums[dq.front()]);
            }

        }

        return result;
    }
};