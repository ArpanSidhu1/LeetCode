class Solution {
public:
    vector<int> lastVisitedIntegers(vector<string>& words) {
    vector<int> ans;
    vector<int> nums;
    int prev = 0;
        for(const string & word :words){
            if(word=="prev"){
                if(prev<nums.size()){
                    ans.push_back(nums[nums.size()-1-prev]);
                }
                else{
                    ans.push_back(-1);
                }
                prev++;
            }
            else{
                int num = stoi(word);
                nums.push_back(num);
                prev = 0;
            }
        }
    return ans;    
    }
};