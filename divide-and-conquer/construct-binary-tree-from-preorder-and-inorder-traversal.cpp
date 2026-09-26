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
    TreeNode* BuildT(vector<int>& preorder,int pstart,int pend,vector<int>& inorder,int istart,int iend,unordered_map<int,int>& inmap)
    {
    if(pstart>pend || istart>iend) return NULL;
    TreeNode* root = new TreeNode(preorder[pstart]); 
    int inroot = inmap[root->val];
    int inleft = inroot - istart;

    root->left = BuildT(preorder,pstart+1,pstart+inleft,inorder,istart,inroot-1,inmap);
    root->right = BuildT(preorder,pstart+inleft+1,pend,inorder,inroot+1,iend,inmap);
    return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    int n = preorder.size(); int m = inorder.size();
    unordered_map<int,int> inmap; // we have to find the preorder value in inorder
    for(int i=0; i<m; i++){
        inmap[inorder[i]] = i; // storing the value with their poisition index.
    } 
    TreeNode* root = BuildT(preorder,0,n-1,inorder,0,m-1,inmap);
    return root; 
    }
};