class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
    int n = nums.size(); //n is representing the size of the array
    unordered_map<int,int> map; // we are taking a unorderd mp which contain key and value here key is the elemnt in the nums and value are the index of the element.
    for(int i=0; i<n; i++){
        if(map.count(nums[i])) //if we find the element already present in the map.
        { 
            if(abs(i-map[nums[i]])<=k) //map[nums[i]]- it is giving the index of the elemtent which is already present.
                return true; 
        } 
        map[nums[i]] = i; // here we are mapping the element with it's index
    } 
    return false;
    }
};