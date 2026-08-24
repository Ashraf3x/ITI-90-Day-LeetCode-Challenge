// Author: Ashraf
// https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/description/
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
class Solution {
    unordered_map<int, int> mp;
    int idx = 0;
    TreeNode* solve(vector<int>& pre, int l, int r) {
        if (l > r) return NULL;
        int val = pre[idx++];
        TreeNode* root = new TreeNode(val);
        int mid = mp[val];
        root->left = solve(pre, l, mid - 1);
        root->right = solve(pre, mid + 1, r);
        return root;
    }

public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for (int i = 0; i < inorder.size(); i++) {
            mp[inorder[i]] = i;
        }
        return solve(preorder, 0, inorder.size() - 1);
    }
};