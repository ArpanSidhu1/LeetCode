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
    int c = 0;
    void dfs(TreeNode* root){
    if(root) c++;
    if(root==NULL) return ;
    dfs(root->left);
    dfs(root->right);
    }
    int countNodes(TreeNode* root) {
    if(root==NULL) return 0;
    dfs(root);
    return c;   
    }
};