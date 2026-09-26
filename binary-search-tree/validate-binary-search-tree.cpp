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
    bool traverseBst(TreeNode* root,vector<long long> range){
        if(root == NULL) return true;
        if((root->val<=range[0]) || (root->val>=range[1])) return false;
        return traverseBst(root->left,{range[0], root->val}) && traverseBst(root->right,{root->val,range[1]});
    }

    bool isValidBST(TreeNode* root) {
        vector<long long> range = {LLONG_MIN, LLONG_MAX};
        bool result = traverseBst(root,range);
        return result;
    }
};