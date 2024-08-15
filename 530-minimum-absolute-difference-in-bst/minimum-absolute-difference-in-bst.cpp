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
    int getMinimumDifference(TreeNode* root) {
        int prev = -1; 
        int minDiff = INT_MAX; 
        inorderTraversal(root, prev, minDiff);
        return minDiff; 
    }

private:
    void inorderTraversal(TreeNode* node, int& prev, int& minDiff) {
        if (node == nullptr) {
            return;
        }
        inorderTraversal(node->left, prev, minDiff);
        if (prev != -1) { 
            minDiff = min(minDiff, abs(node->val - prev)); 
        }
        prev = node->val; 
        inorderTraversal(node->right, prev, minDiff);
    }
};