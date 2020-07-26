// O(N) needed to walk entire linked list
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Edge case, delete the only node
        if (n == 1 && head->next==NULL)
            return NULL;
        ListNode* start = head;
        ListNode* toRemoveAfter = head;
        ListNode* toRemove = head;
        int seen = 1;
        // Stop at end of Linked List
        while (head->next != NULL) {
            head = head->next;
            if (seen > n) { // Start shifting after n+1 elements seen
                toRemoveAfter = toRemoveAfter->next;
                toRemove = toRemove->next;
            } else if (seen == n) {
                toRemove = toRemove->next;
            }
            seen++;
        }
        // Edge case, delete first element
        if (toRemoveAfter == toRemove)
            return toRemoveAfter->next;
        // Skip the n-th node
        toRemoveAfter->next = toRemoveAfter->next->next;
        return start;
    }
};