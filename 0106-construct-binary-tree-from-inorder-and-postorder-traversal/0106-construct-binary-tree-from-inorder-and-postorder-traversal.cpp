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
    TreeNode* build(vector<int>& post,int posts,int poste,vector<int>& io,int ins,int ine,map<int,int> inm){
        if(posts>poste || ins>ine) return NULL;
        TreeNode* root=new TreeNode(post[poste]);
        int inR=inm[root->val];
        int numsL=inR-ins;
        root->left = build(post, posts, posts + numsL - 1, io, ins, inR - 1, inm);
        root->right = build(post, posts + numsL, poste - 1, io, inR + 1, ine, inm);
        // root->left=build(post,posts+1,posts+numsL,io,ins,inR-1,inm);
        // root->right=build(post,posts+numsL,poste,io,inR+1,ine,inm);
        return root;
    }
    TreeNode* buildTree(vector<int>& io, vector<int>& post) {
        map<int,int> inm;
        for(int i=0;i<io.size();i++){
            inm[io[i]]=i;
        }
        TreeNode* r=build(post,0,post.size()-1,io,0,io.size()-1,inm);
        return r;
    }
};