/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode* current = head;
    while (current != NULL) {
        if (current->next != NULL && current->next->val == current->val) {
            // End reached || Next node is a duplicate
            current->next = current->next->next;
        } else {
            // Next element is not a dupe
            current = current->next;
        }
    }
    return head;
}
