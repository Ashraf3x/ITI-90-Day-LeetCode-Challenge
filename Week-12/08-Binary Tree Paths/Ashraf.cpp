// Author: Ashraf
// https://leetcode.com/problems/binary-tree-paths/
// Time Complexity: O(n*h)
// Space Complexity: O(n*h)
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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        function<void(TreeNode*, string)> go = [&](TreeNode* node, string path) {
            if (!node) return;
            path += to_string(node->val);
            if (!node->left && !node->right) {
                ans.push_back(path);
                return;
            }
            path += "->";
            go(node->left, path);
            go(node->right, path);
        };
        go(root, "");
        return ans;
    }
};