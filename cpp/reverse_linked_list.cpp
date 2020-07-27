/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == NULL)
            return NULL;
        vector<ListNode*> v;
        // Place nodes in stack
        while (head != NULL) {
            v.push_back(head);
            head = head->next;
        }
        // Reverse linkages
        for (int i = v.size()-1; i > 0; i--) {
            v[i]->next = v[i-1];
        }
        // Prevent cycles, terminate at end!
        v[0]->next = NULL;
        return v.back();
    }
};