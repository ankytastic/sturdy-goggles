class Solution {
public:
    ListNode* doubleIt(ListNode* head) {
        if(head==nullptr) return head;
        ListNode* curr=head;
        while(curr!=nullptr){
            int newJ=curr->val*2;
            if(newJ<10){
                curr->val=newJ;
            }else{
                curr->val=newJ%10;
                if(curr==head){
                    ListNode* newN=new ListNode(1);
                    head=newN;
                    head->next=curr;
                }
            }
            if(curr->next!=nullptr && curr->next->val*2>=10)
                curr->val+=1;
            curr=curr->next;
        }
        return head;
    }
};