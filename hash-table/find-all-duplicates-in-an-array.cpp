class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;
        // Marking the element negative if it is visited.
        // Only works at a particular constraint.
        // 1 <= nums[i] <= n
        for(int i=0; i<nums.size(); i++){
            int element = abs(nums[i])-1;
            cout<<"Element : "<<element<<endl;
            if(nums[element]<0){
                result.push_back(abs(element+1));
            }else{
                nums[element] = -abs(nums[element]);
            }
        }
        return result;
    }
};