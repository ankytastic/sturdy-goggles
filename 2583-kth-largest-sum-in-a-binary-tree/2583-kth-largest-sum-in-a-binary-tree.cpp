class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        if (!root) return -1;
        vector<long long> levelSums;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            int levelSize = q.size();
            long long currentLevelSum = 0;
            for (int i = 0; i < levelSize; ++i) {
                TreeNode* node = q.front();
                q.pop();
                currentLevelSum += node->val;
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
            levelSums.push_back(currentLevelSum);
        }
        sort(levelSums.rbegin(), levelSums.rend());
        if (k > levelSums.size()) {
            return -1;
        }
        return levelSums[k - 1];
    }
};
