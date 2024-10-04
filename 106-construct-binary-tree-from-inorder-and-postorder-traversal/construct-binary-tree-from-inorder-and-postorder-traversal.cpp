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
    TreeNode* build(vector<int>& post, int posts, int poste, vector<int>& io, int ins, int ine, unordered_map<int, int>& inIndex) {
        if (posts > poste || ins > ine) return nullptr;
        
        TreeNode* root = new TreeNode(post[poste]);
        int inR = inIndex[root->val]; 
        int numsL = inR - ins;        
        root->left = build(post, posts, posts + numsL - 1, io, ins, inR - 1, inIndex);
        root->right = build(post, posts + numsL, poste - 1, io, inR + 1, ine, inIndex);
        
        return root;
    }

    TreeNode* buildTree(vector<int>& io, vector<int>& post) {
        unordered_map<int, int> inIndex; 
        for (int i = 0; i < io.size(); i++) {
            inIndex[io[i]] = i; 
        }
        
        return build(post, 0, post.size() - 1, io, 0, io.size() - 1, inIndex);
    }
};
