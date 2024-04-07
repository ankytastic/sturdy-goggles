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
    ListNode* find(ListNode* temp, int n){
        int cnt=1;
        while(temp!=NULL){
            if(cnt==n) return temp;
            cnt++;
            temp=temp->next;
        }
        return temp;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || k==0) return head;
        ListNode* tail=head;
        int len=1;
        while(tail->next!=NULL){
            tail=tail->next;
            len++;
        }
        k=k%len;
        if(k==0) return head;
        tail->next=head;
        ListNode* newLastNode=find(head,len-k);
        head=newLastNode->next;
        newLastNode->next=NULL;
        return head;
    }
};