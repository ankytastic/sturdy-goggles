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
    typedef unsigned long long ll;
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,ll>> q;
        q.push({root,0});
        ll maxW=0;
        while(!q.empty()){
            ll left=q.front().second;
            ll right=q.back().second;
            maxW=max(maxW,right-left+1);
            int n=q.size();
            while(n--){
                TreeNode* curr=q.front().first;
                ll id=q.front().second;
                q.pop();
                if(curr->left) q.push({curr->left,2*id+1});
                if(curr->right) q.push({curr->right,2*id+2});
            }
        }
        return maxW;
    }
};