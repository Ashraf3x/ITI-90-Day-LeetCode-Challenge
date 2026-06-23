
public class Solution
{
    public Node CopyRandomList(Node head)
    {
        if (head == null)
            return null;

        Dictionary<Node, Node> map = new();

        Node curr = head;

        while (curr != null)
        {
            map[curr] = new Node(curr.val);
            curr = curr.next;
        }

        curr = head;

        while (curr != null)
        {
            map[curr].next = curr.next == null ? null : map[curr.next];
            map[curr].random = curr.random == null ? null : map[curr.random];

            curr = curr.next;
        }

        return map[head];
    }
}
