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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // Calculate the lengths of both lists
        int lenA = getLength(headA);
        int lenB = getLength(headB);
        
        // Move the pointer of the longer list forward by the difference in lengths
        while (lenA > lenB) {
            headA = headA->next;
            lenA--;
        }
        while (lenB > lenA) {
            headB = headB->next;
            lenB--;
        }
        
        // Traverse both lists simultaneously until intersection point is found
        while (headA != headB) {
            headA = headA->next;
            headB = headB->next;
        }
        
        // Return the intersection node (or null if no intersection)
        return headA;
    }
    
    // Helper function to calculate the length of a linked list
    int getLength(ListNode *head) {
        int len = 0;
        while (head) {
            len++;
            head = head->next;
        }
        return len;
    }
};
