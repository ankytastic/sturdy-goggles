class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> color(n, 0); // 0 = unvisited, 1 = visiting, 2 = safe
        vector<int> safeNodes;

        // DFS function to determine if a node is safe
        function<bool(int)> dfs = [&](int node) {
            if (color[node]) return color[node] == 2; // If visited, return if it's safe
            color[node] = 1; // Mark as visiting

            // Explore all connected nodes
            for (int neighbor : graph[node]) {
                if (!dfs(neighbor)) { // If any neighbor is not safe
                    return false;
                }
            }

            color[node] = 2; // Mark as safe since all neighbors are safe
            return true;
        };

        // Check each node
        for (int i = 0; i < n; ++i) {
            if (dfs(i)) {
                safeNodes.push_back(i); // If the node is safe, add to result
            }
        }

        // Sort the result before returning
        sort(safeNodes.begin(), safeNodes.end());
        return safeNodes;
    }
};