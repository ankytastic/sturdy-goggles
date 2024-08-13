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
    vector<vector<int>> res;
    void dfst(TreeNode* node,int tar,int sum,vector<int> r){
        if(node==NULL){
            return ;
        }
        sum+=node->val;
        r.push_back(node->val);
        if(node->left == NULL && node->right == NULL){
            if(sum==tar){
                res.push_back(r);
            }
            return;
        }
        dfst(node->left,tar,sum,r);
        dfst(node->right,tar,sum,r);
        return ;
    }
    vector<vector<int>> pathSum(TreeNode* root, int tar) {
        vector<int> r;
        dfst(root,tar,0,r);
        return res;
    }
};