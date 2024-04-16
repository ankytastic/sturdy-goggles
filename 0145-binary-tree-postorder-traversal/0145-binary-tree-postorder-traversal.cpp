class Solution {
public:
    void solve(TreeNode* root,vector<int> &r){
        if(root==nullptr) return;
        solve(root->left,r);
        solve(root->right,r);
        r.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        solve(root,result);
        return result;
    }
};