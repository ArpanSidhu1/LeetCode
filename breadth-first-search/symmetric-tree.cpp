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
    bool isSymmetric(TreeNode* root) {
        if (root == nullptr) {
            return true;  // An empty tree is symmetric
        }
        return shelper(root->left, root->right);
    }
    
    bool shelper(TreeNode* left, TreeNode* right) {
        if (left == nullptr && right == nullptr) {
            return true;  // Symmetric if both are null
        }
        if (left == nullptr || right == nullptr) {
            return false; // One is null, the other is not => not symmetric
        }
        if (left->val != right->val) {
            return false; // Values don't match => not symmetric
        }

        return shelper(left->left, right->right) &&
               shelper(left->right, right->left);
    }
};
