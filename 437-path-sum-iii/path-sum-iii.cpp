class Solution {
public:
    int pathSum(TreeNode* root, int targetSum) {
        if (root == NULL) {
            return 0;
        }        
        int count = dfst(root, targetSum, 0);
        count += pathSum(root->left, targetSum);
        count += pathSum(root->right, targetSum);
        return count;
    }

private:
    int dfst(TreeNode* node, int targetSum, long long currentSum) {
        if (node == NULL) {
            return 0;
        }        
        currentSum += node->val;
        int count = 0;        
        if (currentSum == targetSum) {
            count++;
        }        
        count += dfst(node->left, targetSum, currentSum);
        count += dfst(node->right, targetSum, currentSum);        
        return count;
    }
};