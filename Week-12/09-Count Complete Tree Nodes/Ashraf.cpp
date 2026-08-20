// Author: Ashraf
// https://leetcode.com/problems/count-complete-tree-nodes/description/
// Time Complexity: O(log^2(n))
// Space Complexity: O(log(n))
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
    int countNodes(TreeNode* root) {
        if (!root) return 0;
        int l = 0, r = 0;
        TreeNode* x = root;
        TreeNode* y = root;
        while (x) {
            l++;
            x = x->left;
        }
        while (y) {
            r++;
            y = y->right;
        }
        if (l == r)
            return (1 << l) - 1;
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};