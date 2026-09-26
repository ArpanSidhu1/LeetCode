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
    void findval(TreeNode* root,int c,int& maxi,int& ans)
    {
        if(!root) return;
        if(c>maxi){
            maxi = c;
            ans = root->val;
        }
        findval(root->left,c+1,maxi,ans);
        findval(root->right,c+1,maxi,ans);
    }
    int findBottomLeftValue(TreeNode* root) {
    int c = 0; int maxi = -1; int ans = 0;
    findval(root,c,maxi,ans);
    return ans;    
    }
};