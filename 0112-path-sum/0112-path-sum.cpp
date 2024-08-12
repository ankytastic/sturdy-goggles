class Solution {
public:
    bool dfst(TreeNode* node,int tar,int sum){
        if(node==NULL){
            return false;
        }
        sum+=node->val;
        if(sum==tar && node->left == NULL && node->right == NULL) return true;
        return (dfst(node->left,tar,sum) || dfst(node->right,tar,sum));
    }
    bool hasPathSum(TreeNode* root, int tar) {
        return dfst(root,tar,0);
    }
};