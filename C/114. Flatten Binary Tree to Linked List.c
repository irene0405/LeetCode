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
class Solution{
        public:
        void flatten(TreeNode* root) {
            if (root == NULL) {
                return;
            }

            if (root->left != NULL) {
                flatten(root->left);
            }
            if (root->right != NULL) {
                flatten(root->right);
            }

            struct TreeNode *temp = root->right;
            root->right = root->left;
            root->left = NULL;
            while (root->right != NULL) {
                root = root->right;
            }
            root->right = temp;
        }
};

// Runtime: 7 ms, faster than 86.75% of C++ online submissions for Flatten Binary Tree to Linked List.
// Memory Usage: 12.7 MB, less than 36.88% of C++ online submissions for Flatten Binary Tree to Linked List.
