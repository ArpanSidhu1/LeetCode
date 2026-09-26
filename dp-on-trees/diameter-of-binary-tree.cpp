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
    int maxDepth(TreeNode* root){
        if(root==NULL) return 0;
        TreeNode* rh = root->left;
        TreeNode* lh = root->right;
        return 1+max(maxDepth(root->left),maxDepth(root->right));
    }

    void traverse(TreeNode* root,int& diameter){
        if(root == NULL) return;
        int lh = maxDepth(root->left);
        int rh = maxDepth(root->right);

        diameter = max(diameter,lh+rh);
        traverse(root->left,diameter);
        traverse(root->right,diameter); 
    }

    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        traverse(root,diameter);
        return diameter;
    }
};