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
    public ListNode ReverseList(ListNode head) {
        ListNode curr = head;
        ListNode Next = null;
        ListNode Prev = null;
        while(curr != null){
            Next = curr.next;
            curr.next = Prev;
            Prev = curr;
            curr = Next;
        }
        return Prev;
    }
}
