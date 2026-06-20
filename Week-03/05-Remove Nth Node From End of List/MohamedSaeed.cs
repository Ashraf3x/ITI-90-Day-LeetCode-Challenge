public class Solution {
    public ListNode RemoveNthFromEnd(ListNode head, int n) {
        ListNode node = new ListNode(-1, head);
        ListNode slow = node;
        ListNode fast = node;

        for(int i = 0; i < n+1; i++) {
            fast = fast.next;
        }
        while(fast != null) {
            fast = fast.next;
            slow = slow.next;
        }
        slow.next = slow.next.next;

        return node.next;
    }
}
