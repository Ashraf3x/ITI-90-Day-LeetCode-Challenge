// Author: Ashraf
// https://leetcode.com/problems/diameter-of-binary-tree/description/
// Time Complexity: O(N)
// Space Complexity: O(N)
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
    int max_diameter = 0;
    int height(TreeNode* node) {
        if (!node) return 0;
        int left_height = height(node->left);
        int right_height = height(node->right);
        max_diameter = max(max_diameter, left_height + right_height);
        return 1 + max(left_height, right_height);
    }

public:
    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return max_diameter;
    }
};