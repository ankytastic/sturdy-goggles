class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }
        if (count == n) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
        ListNode* pred = head;
        for (int i = 1; i < count - n; i++) {
            pred = pred->next;
        }
        ListNode* tempNode = pred->next;
        pred->next = tempNode->next;
        delete tempNode;
        return head;
    }
};