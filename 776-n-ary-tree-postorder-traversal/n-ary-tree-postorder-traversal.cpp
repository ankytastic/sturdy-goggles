/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void postordertraversal(Node* root, vector<int> &ans){
        if(root!=NULL){
            for(auto& n: root->children){
                postordertraversal(n, ans);
            }
            ans.push_back(root->val);
        }
    } 
    vector<int> postorder(Node* root) {
        vector<int> ans;
        postordertraversal(root, ans);
        return ans;
    }
};