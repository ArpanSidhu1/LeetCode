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
public:
    void dfs(TreeNode* root,vector<int>& nums)
    {
        if(root==NULL) return ;
        dfs(root->left,nums);
        nums.push_back(root->val);
        dfs(root->right,nums);
    }
    int getMinimumDifference(TreeNode* root) {
    vector<int> nums; int min1 = INT_MAX;
    dfs(root,nums);
    if(nums.size()<2) return 0;
    for(int i=1; i<nums.size(); i++){
    min1 = min(min1,nums[i]-nums[i-1]);
    }
    return min1;
    }
};