class Solution {
public:
    int dfst(TreeNode* node,int valu){
        if(node==NULL){
            return 0;
        }
        int res=0;
        if(node->val>=valu){
            res+=1;
            valu=node->val;
        }
        res+=dfst(node->left,valu);
        res+=dfst(node->right,valu);
        return res;
    }
    int goodNodes(TreeNode* root) {
        return dfst(root,root->val);
    }
};