// Author: Ashraf
// https://leetcode.com/problems/binary-tree-right-side-view/description/
// Time Complexity: O(N)
// Space Complexity: O(H)
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
    vector<int> ans;
    void dfs(TreeNode* root, int lvl) {
        if (!root) return;
        if (ans.size() == lvl) {
            ans.push_back(root->val);
        }
        dfs(root->right, lvl + 1);
        dfs(root->left, lvl + 1);
    }

public:
    vector<int> rightSideView(TreeNode* root) {
        dfs(root, 0);
        return ans;
    }
};