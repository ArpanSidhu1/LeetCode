class Solution {
public:
    bool isbinary(int n)
    {
        string binary = "";
        if(n==0){
            binary = "0";
        }
        else{
            while(n>0){
                int rem = n%2;
                binary = to_string(rem) + binary;
                n/=2;
            }
        }
        if(binary.back()=='0') return true;
        return false;
    }
    bool hasTrailingZeros(vector<int>& nums) {
    int n = nums.size();
    int c = 0;
    for(int i=0; i<n; i++){
        if(isbinary(nums[i])){
            c += 1;
        }
    }
    if(c>=2) return true;
    return false;
    }
};