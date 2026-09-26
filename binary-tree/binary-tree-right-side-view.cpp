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
    vector<int> rightSideView(TreeNode* root) {
    vector<int> result; 
    if(root==NULL) return result;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty())
    {
       int n = q.size(); vector<int> sub;
       for(int i=0; i<n; i++){
           TreeNode* current = q.front();
           q.pop();
           if(current->left!=NULL) { q.push(current->left); }
           if(current->right!=NULL) { q.push(current->right); }
           sub.push_back(current->val);
       }
    int k = sub.size();
    result.push_back(sub[k-1]);    
    }  
    return result;
    }
};