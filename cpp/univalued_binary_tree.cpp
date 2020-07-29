// O(N) runtime
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
    bool isUnivalTree(TreeNode* root) {
        return isUnival(root, root->val);
    }
    bool isUnival(TreeNode* root, int val) {
        // Base case
        if (root == NULL)
            return true;
        // Recursive case
        return val==root->val && isUnival(root->left, root->val) && isUnival(root->right, root->val);
    }
};