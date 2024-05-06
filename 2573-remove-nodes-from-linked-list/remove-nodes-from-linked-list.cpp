class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* rnode=removeNodes(head->next);
        if(head->val<rnode->val){
            delete head;
            return rnode;
        }
        head->next=rnode;
        return head;
    }
};