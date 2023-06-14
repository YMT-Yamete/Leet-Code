/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int val=0, ListNode next=null) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */
public class Solution {
    public ListNode AddTwoNumbers(ListNode l1, ListNode l2) {
        ListNode l3 = new ListNode();
        l3.val = l1.val + l2.val;
        l3.next.val = l1.next.val + l2.next.val;
        l3.next.next.val = l1.next.next.val + l2.next.next.val;

        return l3;
    }
}