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

            if (root->right != NULL) {
                flatten(root->right);
            }
            if (root->left != NULL) {
                flatten(root->left);
            }

            struct TreeNode *temp;
            temp = root->right;
            root->right = root->left;
            root->left = NULL;
            while (root->right != NULL) {
                root = root->right;
            }
            root->right = temp;
        }
};
