class Solution {
public:
    void solve(TreeNode* root,vector<int> &r){
        if(root==nullptr) return;
        solve(root->left,r);
        r.push_back(root->val);
        solve(root->right,r);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        solve(root,result);
        return result;
    }
};