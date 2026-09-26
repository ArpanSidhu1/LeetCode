class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
    vector<string> result;
    int n = nums.size();
    int start=0;
    int end = 0;
    for(int i=0; i<n; ){
        start = nums[i];
        end = start;
        while(i+1<n && nums[i]+1==nums[i+1]){
            i++;
            end = nums[i];
        }
        if(start==end){
            result.push_back(to_string(start));
        }
        else{
            result.push_back(to_string(start)+"->"+to_string(end));
        }
        i++;
    }   
    return result;
    }
};