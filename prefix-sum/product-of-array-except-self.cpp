class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> resultProduct;
        int n = nums.size(); 
        int prefixProduct = 1;
        for(int i=0; i<n; i++){
            resultProduct.push_back(prefixProduct);
            prefixProduct = prefixProduct * nums[i]; 
        }
        int suffixProduct = 1;
        for(int i=n-1; i>=0; i--){
            resultProduct[i] =  resultProduct[i] * suffixProduct;
            suffixProduct = suffixProduct * nums[i];
        }
        return resultProduct;
    }
};