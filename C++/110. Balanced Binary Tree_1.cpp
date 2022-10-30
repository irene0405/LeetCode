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
        bool balanced = true;
        getHeight(root, &balanced);
        return balanced;
    }

private:
    int getHeight(TreeNode *root, bool *balanced) {
        if (!root) {
            return 0;
        }

        int leftHeight = getHeight(root->left, balanced);
        if (!balanced) {
            return false;
        }
        int rightHeight = getHeight(root->right, balanced);
        if (!balanced) {
            return false;
        }
        if (abs(leftHeight - rightHeight) > 1) {
            *balanced = false;
            return false;
        }
        return max(leftHeight, rightHeight) + 1;
    }
};

// Runtime: 26 ms, faster than 51.31% of C++ online submissions for Balanced Binary Tree.
// Memory Usage: 20.9 MB, less than 80.96% of C++ online submissions for Balanced Binary Tree.

