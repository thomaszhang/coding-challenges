/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool isMirror(struct TreeNode* left, struct TreeNode* right) {
    // Base case
    if (left == NULL && right == NULL)
        return true;
    if (left == NULL && right != NULL)
        return false;
    if (left != NULL & right == NULL)
        return false;
    if (left->val != right->val)
        return false;
    // Recurse
    bool mirror = isMirror(left->left, right->right) && isMirror(left->right, right->left);
    return mirror;
}


bool isSymmetric(struct TreeNode* root){
    if (root == NULL)
        return true;
    return isMirror(root->left, root->right);
}