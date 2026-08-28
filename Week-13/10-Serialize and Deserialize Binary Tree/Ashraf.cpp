// Author: Ashraf
// https://leetcode.com/problems/serialize-and-deserialize-binary-tree/description/
// Time Complexity: O(N)
// Space Complexity: O(N)
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
    TreeNode* build(stringstream& ss) {
        string s;
        ss >> s;
        if (s == "N") return NULL;
        TreeNode* root = new TreeNode(stoi(s));
        root->left = build(ss);
        root->right = build(ss);
        return root;
    }

public:
    string serialize(TreeNode* root) {
        if (!root) return "N ";
        return to_string(root->val) + " " + serialize(root->left) + serialize(root->right);
    }

    TreeNode* deserialize(string data) {
        stringstream ss(data);
        return build(ss);
    }
};