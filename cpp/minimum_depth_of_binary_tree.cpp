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
    int minDepth(TreeNode* root) {
        // Empty tree
        if (root == NULL)
            return 0;
        // FIFO
        queue<pair<TreeNode*, int>> q;
        q.push(make_pair(root, 1));
        // BFS until first leaf
        while (!q.empty()) {
            pair<TreeNode*, int> curr = q.front(); q.pop();
            if (curr.first->left == NULL && curr.first->right == NULL)
                return curr.second;
            if (curr.first->left != NULL)
                q.push(make_pair(curr.first->left, curr.second+1));
            if (curr.first->right != NULL)
                q.push(make_pair(curr.first->right, curr.second+1));
        }
        // Never reached?
        return 0;
    }
};