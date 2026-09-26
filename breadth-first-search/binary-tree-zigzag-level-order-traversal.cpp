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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    vector<vector<int>> result;
    if(root==NULL) return result;
    queue<TreeNode*> q;
    q.push(root);
    int c = 0;
    while(!q.empty())
    {
        vector<int> sub;
        int n =q.size();
        c++;
        for(int i=0; i<n; i++){
        TreeNode* current = q.front();
        q.pop();
        if (current != nullptr) {
            sub.push_back(current->val);
            if (current->left != nullptr) { q.push(current->left); }
            if (current->right != nullptr) { q.push(current->right); }
        }
        }
    if(c%2!=0) {
    result.push_back(sub);
    }
    else { 
    reverse(sub.begin(),sub.end());
    result.push_back(sub);
    }    
    }    
    return result;
    }
};