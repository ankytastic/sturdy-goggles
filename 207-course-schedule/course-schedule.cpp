class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int, vector<int>> graph;
        for (const auto& prereq : prerequisites) {
            graph[prereq[1]].push_back(prereq[0]);
        }
        
        vector<int> state(numCourses, 0);
        
        for (int i = 0; i < numCourses; ++i) {
            if (state[i] == 0) {
                if (hasCycle(graph, state, i)) {
                    return false;
                }
            }
        }
        
        return true;
    }
    
private:
    bool hasCycle(unordered_map<int, vector<int>>& graph, vector<int>& state, int course) {
        if (state[course] == 1) return true; 
        if (state[course] == 2) return false; 
        state[course] = 1;
        
        for (int neighbor : graph[course]) {
            if (hasCycle(graph, state, neighbor)) {
                return true;
            }
        }
        
        state[course] = 2;
        return false;
    }
};
