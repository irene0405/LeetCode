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
            root = flattenHelper(root);
        }

        private:
        typedef struct TreeNode NODE;

        NODE* flattenHelper(NODE* root)
        {
            if (NULL == root) {
                return NULL;
            }

            root->left = flattenHelper(root->left);
            root->right = flattenHelper(root->right);

            if (NULL != root->left) {
                NODE *tmpRight = root->right;
                NODE *tmpLeftEnd = root->left;

                while (tmpLeftEnd->right != NULL) {
                    tmpLeftEnd = tmpLeftEnd->right;
                }

                root->right = root->left;
                tmpLeftEnd->right = tmpRight;
                root->left = NULL;
            }
            return root;
        }
};

// Runtime: 3 ms, faster than 98.00% of C++ online submissions for Flatten Binary Tree to Linked List.
// Memory Usage: 12.6 MB, less than 77.06% of C++ online submissions for Flatten Binary Tree to Linked List.
