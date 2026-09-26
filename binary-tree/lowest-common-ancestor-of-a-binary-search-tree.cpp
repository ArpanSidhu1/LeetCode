/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    void findTheNode(TreeNode* root,TreeNode* target,int& count){
        if(root==NULL) return;
        if(root == target) count++;
        findTheNode(root->left,target,count);
        findTheNode(root->right,target,count);
    }

    void traverse(TreeNode* root,TreeNode*p,TreeNode*q,TreeNode*& ans){
        if(root == NULL) return;
        int count = 0;
        int count1 = 0;
        findTheNode(root,p,count);
        findTheNode(root,q,count1);

        if(count == 1 && count1 == 1){
            ans = root;
        }

        traverse(root->left,p,q,ans);
        traverse(root->right,p,q,ans);
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* result;
        traverse(root,p,q,result);
        return result;
    }  
};