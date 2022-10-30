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
    bool isBalanced(TreeNode *root) {
        if (!root) {
            return true;
        }
        int leftHeight = getHeight(root->left);
        int rightHeight = getHeight(root->right);
        return (abs(leftHeight - rightHeight) <= 1 && isBalanced(root->left) && isBalanced(root->right));
    }

private:
    int getHeight(TreeNode *root) {
        if (!root) {
            return 0;
        } else {
            return max(getHeight(root->left), getHeight(root->right)) + 1;
        }
    }
};

// Runtime: 15 ms, faster than 87.96% of C++ online submissions for Balanced Binary Tree.
// Memory Usage: 20.8 MB, less than 95.02% of C++ online submissions for Balanced Binary Tree.

