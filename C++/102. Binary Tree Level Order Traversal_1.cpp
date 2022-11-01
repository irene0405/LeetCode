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
        if (!root) return {};
        vector <vector<int>> ans;
        vector < TreeNode * > curr, next;
        curr.push_back(root);
        while (!curr.empty()) {
            ans.push_back({});
            for (TreeNode *node : curr) {
                ans.back().push_back(node->val);
                if (node->left) next.push_back(node->left);
                if (node->right) next.push_back(node->right);
            }
            curr.swap(next);
            next.clear();
        }
        return ans;
    }
};

// Runtime: 3 ms, faster than 91.98% of C++ online submissions for Binary Tree Level Order Traversal.
// Memory Usage: 12.5 MB, less than 84.51% of C++ online submissions for Binary Tree Level Order Traversal.

