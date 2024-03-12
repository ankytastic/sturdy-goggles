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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* current = dummy;
        while (current->next != nullptr) {
            int sum = 0;
            ListNode* temp = current->next;
            while (temp != nullptr) {
                sum += temp->val;
                if (sum == 0) {
                    current->next = temp->next;
                    break;
                }
                temp = temp->next;
            }
            if (sum != 0) {
                current = current->next;
            }
        }
        return dummy->next;
    }
};