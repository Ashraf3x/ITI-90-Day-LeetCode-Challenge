public class Solution {
    public void ReorderList(ListNode head) {
        if (head == null || head.next == null) return;

        List<ListNode> nodes = new List<ListNode>();
        ListNode current = head;

        while (current != null) {
            nodes.Add(current);
            current = current.next;
        }

        int left = 0;
        int right = nodes.Count - 1;

        while (left < right) {

            nodes[left].next = nodes[right];
            left++;

            if (left == right) break; 

            nodes[right].next = nodes[left];
            right--;
        }

        nodes[left].next = null;
    }
}
