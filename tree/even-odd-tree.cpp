/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
bool isSortedEven(vector<int>& nums) {
        int n = nums.size();
        if (n == 1 && nums[0] % 2 != 0) return false;
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] <= nums[i + 1] || nums[i] % 2 != 0 || nums[i] == 1) return false;
        }
        if(nums[n-1]%2!=0) return false;
        return true;
    }
 bool isSortedOdd(vector<int>& nums) {
        int n = nums.size();
        if (n == 1 && nums[0] % 2 == 0) return false;
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] >= nums[i + 1] || nums[i] % 2 == 0) return false;
        }
        if(nums[n-1]%2==0) return false;
        return true;
    }
public:
    bool isEvenOddTree(TreeNode* root) {
    if(root==NULL) return true;
    queue<TreeNode*> q;
    int c = 0;
    q.push(root);
    while(!q.empty())
    {
        int k = q.size();
        vector<int> sub;
        for(int i=0; i<k; i++){
            TreeNode* current = q.front();
            q.pop();
            if(current->left!=NULL) q.push(current->left);
            if(current->right!=NULL) q.push(current->right);
            sub.push_back(current->val);
        }
    if(c%2==0){
        bool flag = isSortedOdd(sub);
        if(flag==false) return false;
    }
    else{
        bool flag = isSortedEven(sub);
        if(flag==false) return false;
    }
    c++;    
    }                                
    return true;                                                                                              
    }
};