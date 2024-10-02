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
    ListNode* partition(ListNode* head, int x) {
        ListNode* small=new ListNode();
        ListNode* smallp=small;
        ListNode* large=new ListNode();
        ListNode* largep=large;
        ListNode* curr=head;
        while(curr!=NULL){
            if(curr->val<x){
                smallp->next=curr;
                smallp=smallp->next;
                curr=curr->next;
            }else{
                largep->next=curr;
                largep=largep->next;
                curr=curr->next;
            }
        }
        smallp->next=large->next;
        largep->next=NULL;
        return small->next;
    }
};