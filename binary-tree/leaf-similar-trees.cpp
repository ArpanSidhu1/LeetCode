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
    void inorder(vector<int>& result,TreeNode* root)
    {
        if(root==NULL) return;
        inorder(result,root->left);
        if(root->left==NULL && root->right==NULL){
            result.push_back(root->val);
        }
        inorder(result,root->right);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
    vector<int> result1;
    vector<int> result2;
    inorder(result1,root1);
    inorder(result2,root2);
    int n = result1.size();
    return result1==result2;
    }
};