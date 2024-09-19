class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        if (!head) return head;  
        ListNode* curr = head->next;  
        head->next = nullptr;         
        while (curr) {
            ListNode* pos = head;  
            if (curr->val < pos->val) {
                ListNode* temp = curr;
                curr = curr->next;  
                temp->next = head;  
                head = temp; 
            } else {
                while (pos->next && pos->next->val < curr->val) {
                    pos = pos->next;  
                }
                ListNode* temp = curr;
                curr = curr->next;  
                temp->next = pos->next;  
                pos->next = temp; 
            }
        }

        return head;
    }
};
