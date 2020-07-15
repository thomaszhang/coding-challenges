/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    // Base cases
    if (l1==NULL && l2==NULL)
        return NULL;
    if (l1==NULL)
        return l2;
    if (l2==NULL)
        return l1;
    // Recursive case
    if (l1->val < l2->val) {
        // Branch l1
        l1->next = mergeTwoLists(l1->next, l2);
        return l1;
    } else {
        // Branch l2
        l2->next = mergeTwoLists(l2->next, l1);
        return l2;
    }
        
}
