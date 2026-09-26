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
    vector<double> averageOfLevels(TreeNode* root) {
    vector<double> result;
    if(root == NULL) return result;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty())
    {
        vector<int> sub;
        int n = q.size();
        for(int i=0; i<n; i++){
            TreeNode* current = q.front();
            q.pop();
            if(current->left!=NULL) {q.push(current->left); }
            if(current->right!=NULL) { q.push(current->right); }
            sub.push_back(current->val);
        }
    int k = sub.size(); double sum = 0;
    for(int i=0; i<k; i++) {
        sum += sub[i];
    }    
    double avg = sum/k;
    result.push_back(avg);
    }  
    return result;
    }
};