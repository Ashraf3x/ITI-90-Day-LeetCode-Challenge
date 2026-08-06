// Author: Ashraf
// https://leetcode.com/problems/all-paths-from-source-to-target/description/
// Time Complexity: O(N*2^N)
// Space Complexity: O(N)
class Solution {
    vector<vector<int>> ans;
    vector<int> path;
    void dfs(auto node, vector<vector<int>>& graph) {
        path.push_back(node);
        if (node == graph.size() - 1) {
            ans.push_back(path);
        } else {
            for (int nextNode : graph[node]) {
                dfs(nextNode, graph);
            }
        }
        path.pop_back();
    }
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        dfs(0, graph);
        return ans;
    }
};