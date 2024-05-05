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
        ListNode* last=node->next;
        int temp=last->val;
        last->val=node->val;
        node->val=temp;
        node->next=last->next;
    }
};