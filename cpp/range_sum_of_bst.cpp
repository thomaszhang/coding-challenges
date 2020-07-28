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

// Without pruning (more performant?)
class Solution {
public:
    int rangeSumBST(TreeNode* root, int L, int R) {
        // Base case
        if (root == NULL) {
            return 0;
        }
        // Recursive without pruning
        if (root->val >= L && root->val <= R) {
            return root->val + rangeSumBST(root->left, L, R) + rangeSumBST(root->right, L, R);
        }
        return rangeSumBST(root->left, L, R) + rangeSumBST(root->right, L, R);
    }
};

// With pruning
class Solution {
public:
    int rangeSumBST(TreeNode* root, int L, int R) {
        // Base case
        if (root == NULL) {
            return 0;
        }
        // Recursive 
        if (root->val >= L && root->val <= R) { 
            return root->val + rangeSumBST(root->left, L, R) + rangeSumBST(root->right, L, R);
        }
        // Prune left subtree
        if (root->val < L) {
            return rangeSumBST(root->right, L, R);
        }
        // Prune right subtree
        if (root->val > R) {
            return rangeSumBST(root->left, L, R);
        }
        // Default
        return rangeSumBST(root->left, L, R) + rangeSumBST(root->right, L, R);
    }
};