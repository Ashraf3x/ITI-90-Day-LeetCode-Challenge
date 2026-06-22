public class Solution
{
    public ListNode AddTwoNumbers(ListNode l1, ListNode l2)
    {
        int remainder = 0;
        ListNode result = new ListNode();
        ListNode resultTemp = result;
        while (l1 != null || l2 != null || remainder > 0)
        {
            int upperNodeValue = 0;
            int lowerNodeValue = 0;
            if (l1 != null)
            {
                upperNodeValue = l1.val;
                l1 = l1.next;
            }
            if(l2 != null)
            {
                lowerNodeValue = l2.val;
                l2 = l2.next;
            }
            
            ListNode tempNode = new ListNode((upperNodeValue+lowerNodeValue+remainder )%10,null);
            remainder = (upperNodeValue + lowerNodeValue + remainder) / 10;
            resultTemp.next = tempNode;
            resultTemp = tempNode;
        }
        return result.next;
    }
}
