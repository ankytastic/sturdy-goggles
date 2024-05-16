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
    bool evaluateTree(TreeNode* root) {
        if(root->val==1 || root->val==0) return (bool)(root->val);
        int let=evaluateTree(root->left);
        int ret=evaluateTree(root->right);
        if(root->val==2){
            return (bool)(let || ret);
        }
        else{
            return (bool)(let && ret);
        }
        return true;
    }
};