class Solution {
public:
    int maxOperations(vector<int>& nums) {
    int n = nums.size(); int sum = 0; int j = 0; int c = 1; vector<int> result;
    for(int i=0; i<n-1; i+=2){
        sum+=nums[i];
        sum+=nums[i+1];
        result.push_back(sum);
        sum=0;
    }
    for(int i=0; i<result.size()-1; i++){
        if(result[i]==result[i+1]){
            c+=1;
        }
        else{
            break;
        }
    }
    return c;
    }
};