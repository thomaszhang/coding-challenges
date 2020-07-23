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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = new ListNode();
        ListNode* root = result;
        int carry = 0;
        // Start from root
        while (l1 != NULL || l2 != NULL) {
            int a = (l1 == NULL) ? 0 : l1->val;
            int b = (l2 == NULL) ? 0 : l2->val;            
            // Calculate sum
            int sum = (a+b+carry);
            carry = sum / 10;
            sum = sum % 10;
            // Update current linked list node
            root->val = sum;
            l1 = (l1 == NULL) ? NULL : l1->next;
            l2 = (l2 == NULL) ? NULL : l2->next;
            // Create next node if additional digit needed
            if (l1 != NULL || l2 != NULL || carry != 0) {
                root->next = new ListNode(carry);
                root = root->next;
            }
        }
        // Return LL from beginning
        return result;
    }
};