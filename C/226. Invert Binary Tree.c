/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


struct TreeNode* invertTree(struct TreeNode* root){
    if (root == NULL) {
        return root;
    }

    struct TreeNode *temp;

    temp = root->left;
    root->left = root->right;
    root->right = temp;
    invertTree(root->left);
    invertTree(root->right);
    return root;
}

// Runtime: 0 ms, faster than 100.00% of C online submissions for Invert Binary Tree.
// Memory Usage: 5.9 MB, less than 74.46% of C online submissions for Invert Binary Tree.

