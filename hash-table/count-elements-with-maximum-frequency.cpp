class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
    unordered_map<char,int> ump;
    for(int i=0; i<nums.size(); i++){
        ump[nums[i]]++;
    }    
    int maxi = 0;
    for(const auto x : ump){
        if(x.second>maxi){
            maxi = x.second;
        }
    }
    int sum = 0;
    for(const auto x : ump){
        if(x.second==maxi){
        sum+=x.second;
        }
    }
    return sum;
    }
};