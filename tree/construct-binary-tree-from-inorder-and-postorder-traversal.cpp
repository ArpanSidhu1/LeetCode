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
    TreeNode* BuildT(vector<int>& postorder,int pstart,int pend,vector<int>& inorder,int istart,int iend,unordered_map<int,int>& inmap)
    {
        if(pstart>pend || istart>iend) return nullptr;
        TreeNode* root = new TreeNode(postorder[pend]);

        int isroot = inmap[root->val];
        int inleft = isroot - istart;

        root->left = BuildT(postorder,pstart,pstart+inleft-1,inorder,istart,isroot-1,inmap);
        root->right = BuildT(postorder,pstart+inleft,pend-1,inorder,isroot+1,iend,inmap);
    return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
    int n = inorder.size()-1;
    int m = postorder.size()-1;
    unordered_map<int,int> inmap;
    for(int i=0; i<inorder.size(); i++){
        inmap[inorder[i]] = i;
    }
    return BuildT(postorder,0,m,inorder,0,n,inmap);
    }
};