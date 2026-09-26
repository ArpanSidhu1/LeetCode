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
    int dfs(TreeNode* root,int& count){
        if(root == nullptr){
            return INT_MIN;
        }  

        int leftMax = dfs(root->left,count);
        int rightMax = dfs(root->right,count);
        int rootMax = max(max(leftMax,rightMax),root->val);

        if(rootMax == root->val){
            count++;
        }
        
        return rootMax;
    }

    int countDominantNodes(TreeNode* root) {
        int count = 0;
        int value = dfs(root,count);
        return count;
    }
};