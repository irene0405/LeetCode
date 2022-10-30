class Solution {
public:
    bool isBalanced(TreeNode *root) {
        if (!root) return true;
        bool balanced = true;
        height(root, &balanced);
        return balanced;
    }

private:
    int height(TreeNode *root, bool *balanced) {
        if (!root) return 0;
        int left_height = height(root->left, balanced);
        if (!balanced) return false;
        int right_height = height(root->right, balanced);
        if (!balanced) return false;
        if (abs(left_height - right_height) > 1) {
            *balanced = false;
            return false;
        }
        return max(left_height, right_height) + 1;
    }
};

// Runtime: 35 ms, faster than 18.57% of C++ online submissions for Balanced Binary Tree.
// Memory Usage: 20.9 MB, less than 80.96% of C++ online submissions for Balanced Binary Tree.

