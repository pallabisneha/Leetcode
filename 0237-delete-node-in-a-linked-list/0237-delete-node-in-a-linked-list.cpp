/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;      // Step 1: Copy next node's value
        ListNode* temp = node->next;      // Step 2: Save pointer to next node
        node->next = node->next->next;    // Step 3: Skip over the next node
        delete temp;                      // Step 4: Delete the next node
    }
};
