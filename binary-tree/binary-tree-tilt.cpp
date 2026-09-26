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
    int nodeSum(TreeNode* root){
        if(root == NULL) return 0;
        TreeNode* rh = root->left;
        TreeNode* lh = root->right;
        int k1 = root->val;
        k1+= nodeSum(root->left);
        k1+= nodeSum(root->right);
        return k1;
    } 

    void traverse(TreeNode* root,int& sum){
        if(root == NULL) return;
        int lh = nodeSum(root->left);
        int rh = nodeSum(root->right);
        sum += abs(rh-lh);
        cout<<"Root Value : "<<root->val<<endl;
        cout<<"Left Sum : "<<lh<<endl;
        cout<<"Right Sum : "<<rh<<endl;
        cout<<endl;
        cout<<endl;
        traverse(root->left,sum);
        traverse(root->right,sum);
    }

    int findTilt(TreeNode* root) {
        int sum = 0;
        traverse(root,sum);
        return sum;
    }
};