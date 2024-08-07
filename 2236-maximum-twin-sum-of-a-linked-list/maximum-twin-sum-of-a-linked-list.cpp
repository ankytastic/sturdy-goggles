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
    int pairSum(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* mid=slow;
        ListNode* prev=NULL;
        ListNode* nextNode=NULL;
        while(mid!=NULL){
            nextNode=mid->next;
            mid->next=prev;
            prev=mid;
            mid=nextNode;
        }
        int res=0;
        slow=head;
        while(prev!=NULL){
            res=max(res,prev->val+slow->val);
            prev=prev->next;
            slow=slow->next;
        }
        return res;
    }
};