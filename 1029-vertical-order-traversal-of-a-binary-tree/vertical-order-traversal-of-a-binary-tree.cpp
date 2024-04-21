class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL) {
            return ans;
        }
        map<int, vector<int>> mpp;
        queue<pair<TreeNode*, int>> q;
        q.push({root, 0});
        
        while(!q.empty()) {
            int size = q.size();
            map<int, vector<int>> level_map;
            
            for(int i = 0; i < size; i++) {
                auto it = q.front();
                q.pop();
                TreeNode* node = it.first;
                int line = it.second;
                
                level_map[line].push_back(node->val);
                
                if(node->left != NULL) {
                    q.push({node->left, line - 1});
                }
                if(node->right != NULL) {
                    q.push({node->right, line + 1});
                }
            }
            
            for(auto& it : level_map) {
                sort(it.second.begin(), it.second.end()); 
                mpp[it.first].insert(mpp[it.first].end(), it.second.begin(), it.second.end());
            }
        }
        
        for(auto& it : mpp) {
            ans.push_back(it.second);
        }
        
        return ans;
    }
};
