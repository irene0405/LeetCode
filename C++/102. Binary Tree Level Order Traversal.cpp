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
    vector <vector<int>> levelOrder(TreeNode *root) {
        vector <vector<int>> ans;
        queue < TreeNode * > curr, next;
        if (!root) {
            return {};
        }
        if (root->right == NULL && root->left == NULL) {
            return {{root->val}};
        }

        curr.push(root);
        vector<int> v;
        while (!curr.empty()) {
            v.push_back(curr.front()->val);
            if (curr.front()->left) {
                next.push(curr.front()->left);
            }
            if (curr.front()->right) {
                next.push(curr.front()->right);
            }
            curr.pop();

            if (curr.empty()) {
                ans.push_back(v);
                v.clear();
                curr.swap(next);
            }
        }

        return ans;
    }
};

// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Binary Tree Level Order Traversal.
// Memory Usage: 12.6 MB, less than 62.20% of C++ online submissions for Binary Tree Level Order Traversal.

