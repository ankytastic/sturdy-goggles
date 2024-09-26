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
        vector<double> r; 
        queue<TreeNode*> q; 
        q.push(root); 
        while(!q.empty()){
            int s = 0, c = 0;
            queue<TreeNode*> t; 
            while(!q.empty()){
                TreeNode* n = q.front();
                q.pop();
                s += n->val;
                c++;
                if(n->left != NULL) t.push(n->left);
                if(n->right != NULL) t.push(n->right);
            }
            q = t; 
            r.push_back((double)s / c); 
        }
        return r;
    }
};