/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


bool isSameTree(struct TreeNode* p, struct TreeNode* q){
    // Base case 
    if (p == NULL && q == NULL)
        return true;
    // Both pointers existence equal
    bool xmatch = (p == NULL) == (q == NULL); 
    if (!xmatch) 
        return false;
    // Same props
    bool lmatch = (p->left == NULL) == (q->left == NULL); 
    bool rmatch = (p->right == NULL) == (q->right == NULL);
    bool vmatch = (p->val == q->val);
    // Premature end of comparison
    if (!vmatch || !rmatch || !lmatch)
        return false;
    // Recurse
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}
