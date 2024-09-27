/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        if (head == null || head.next == null) {
            return head; 
        }
        HashMap<Integer, Integer> countMap = new HashMap<>();
        ListNode curr = head;
        while (curr != null) {
            countMap.put(curr.val, countMap.getOrDefault(curr.val, 0) + 1);
            curr = curr.next;
        }
        ListNode dummy = new ListNode(0); 
        ListNode newHead = dummy;
        curr = head; 
        while (curr != null) {
            if (countMap.get(curr.val) == 1) { 
                newHead.next = new ListNode(curr.val);
                newHead = newHead.next;
            }
            curr = curr.next;
        }
        return dummy.next; 
    }
}