public class Solution {
    public bool HasCycle(ListNode head) {
        HashSet<ListNode> visited = new();

        while (head != null)
        {
            if (visited.Contains(head))
                return true;

            visited.Add(head);
            head = head.next;
        }

        return false;
    }
}
