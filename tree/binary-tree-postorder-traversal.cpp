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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> v;
        postorder1(root,v);
        return v;
    }
    void postorder1(TreeNode* node,vector<int>& result)
    {
    if(node==NULL){
        return ;
    }    
    postorder1(node->left,result);
    postorder1(node->right,result);
    result.push_back(node->val);    
    }
};