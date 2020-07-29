// O(N) runtime, DFS

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> v;
        // Base case
        if (root == NULL)
            return v;
        // Recursive case
        v.push_back(root->val);
        // Add children traversal to parent
        for (int i = 0; i < root->children.size(); i++) {
            // Children ordered from smallest to largest
            vector<int> t = preorder(root->children[i]);
            v.insert(v.end(), t.begin(), t.end());
        }
        return v;
    }
};