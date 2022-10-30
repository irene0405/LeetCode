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
    TreeNode *invertTree(TreeNode *root) {
        if (root == NULL) {
            return root;
        }
        TreeNode *temp = root->left;
        root->left = invertTree(root->right);
        root->right = invertTree(temp);
        return root;
    }
};

// Runtime: 8 ms, faster than 18.68% of C++ online submissions for Invert Binary Tree.
// Memory Usage: 9.8 MB, less than 5.22% of C++ online submissions for Invert Binary Tree.

