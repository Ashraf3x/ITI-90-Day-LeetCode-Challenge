// Author: Ashraf
// https://leetcode.com/problems/symmetric-tree/description/
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
public:
    bool check(TreeNode* l, TreeNode* r) {
        if (!l && !r) return true;
        if (!l || !r || l->val != r->val) return false;
        return check(l->left, r->right) && check(l->right, r->left);
    }

    bool isSymmetric(TreeNode* root) {
        if (!root) return true;
        return check(root->left, root->right);
    }
};