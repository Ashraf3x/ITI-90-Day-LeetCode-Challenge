// Author: Ashraf
// https://leetcode.com/problems/validate-binary-search-tree/description/
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
    bool check(TreeNode* root, TreeNode* mn, TreeNode* mx) {
        if (!root) return true;
        if (mn && root->val <= mn->val) return false;
        if (mx && root->val >= mx->val) return false;
        return check(root->left, mn, root) && check(root->right, root, mx);
    }

public:
    bool isValidBST(TreeNode* root) {
        return check(root, NULL, NULL);
    }
};