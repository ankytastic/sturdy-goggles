/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public boolean hasCycle(ListNode head) {
        // Approach 2 
        // Set<ListNode> s = new HashSet<>();
        // ListNode current=head;
        // while(current!=null){
        //     if(s.contains(current)){
        //         return true;
        //     }
        //     else{
        //         s.add(current);
        //         current=current.next;
        //     }
        // }
        // return false;
// Approach 1 Floyd Hare and Tortoise
        ListNode fast=head;
        ListNode slow=head;
        while(fast.next!=null && fast.next.next!=null){
            fast=fast.next.next;
            slow=slow.next;
            if(fast==slow) return true;
        }
        return false;
    }
}