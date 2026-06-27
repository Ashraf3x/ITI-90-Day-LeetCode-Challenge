/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public bool HasCycle(ListNode head) {
        ListNode curr = head;
        List<ListNode> nodes = new();
        while(curr != null ){
            nodes.Add(curr);
            curr = curr.next;
            if(nodes.Contains(curr)){
                return true;
            }
        }
        return false;
        
    }
}
