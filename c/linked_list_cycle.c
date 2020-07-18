/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

// 3 2 0 4 5        SUM: 14     XOR: 3 0 2 4 5
// 3 2 0 4 5 2      SUM: 17     XOR: 3 2 4 5
bool hasCycle(struct ListNode *head) {
    if (head == NULL)
        return false;
    // Both pointers at 0
    struct ListNode* slow = head;
    struct ListNode* fast = head;
    // If can still step forward
    while (slow->next != NULL && fast->next != NULL && fast->next->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        // Fast catches slow without ending
        if (fast == slow)
            return true;
    }
    // If NULL pointer encountered
    return false;
}
