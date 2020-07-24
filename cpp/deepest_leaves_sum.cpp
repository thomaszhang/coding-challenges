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
    vector<TreeNode*> a; // Current depth
    vector<TreeNode*> b; // Children of A
    // Generate B from A
    void createChildren() {
        b.clear();
        for (int i = 0; i < a.size(); i++) {
            if (a[i]->left != NULL)
                b.push_back(a[i]->left);
            if (a[i]->right != NULL)
                b.push_back(a[i]->right);
        }
    }
    
    int deepestLeavesSum(TreeNode* root) {
        a.push_back(root);
        // Generate and swap until no more children
        while (1) {
            // Generate b
            createChildren();
            // Exit if no children
            if (b.empty())
                break;
            // Update a with b
            a = b;
            b.clear();
        }
        // Accumulate sum
        int sum = 0;
        for (int i = 0; i < a.size(); i++) {
            sum += a[i]->val;
        }
        return sum;
    }
};