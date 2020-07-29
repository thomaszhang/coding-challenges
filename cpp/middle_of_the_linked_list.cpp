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

// Double pointer approach
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        bool c = true;
        ListNode* curr = head;
        ListNode* mid = head;
        // Double pointer, mid moves half the speed
        while (curr->next != NULL) {
            if (c)
                mid = mid->next;
            curr = curr->next;
            c = !c;
        }
        return mid;
    }
};

 // Counting approach
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int c = 0;
        ListNode* curr = head;
        // Get length of array
        while (curr->next != NULL) {
            curr = curr->next;
            c++;
        }
        // Get middle node
        curr = head;
        for (int i = 0; i < (c - c/2); i++) {
            curr = curr->next;
        }
        return curr;
    }
};