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
    public ListNode MiddleNode(ListNode head) {
        int counter =0;
        Dictionary<int, ListNode> map = new();
        ListNode curr = head;
        if(curr == null){
            return null;
        }
        while(curr != null){
            counter++;
            map.Add(counter,curr);
            curr = curr.next;
        }
        return map[counter/2 +1];

    }
}
