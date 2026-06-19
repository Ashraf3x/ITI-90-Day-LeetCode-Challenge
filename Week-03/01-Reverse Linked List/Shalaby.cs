
namespace ListNode
{
    public class ListNode
    {
        public int val;
        public ListNode next;
        public ListNode(int val = 0, ListNode next = null)
        {
            this.val = val;
            this.next = next;
        }
        override public string ToString()
        {
            return $"{val} -> {next}";
        }
    }


    public class Program
    {
        public static ListNode ReverseList(ListNode head)
        {
            ListNode prev = null;
            ListNode cur = head;

            while (cur != null)
            {
                ListNode next = cur.next;
                cur.next = prev;
                prev = cur;
                cur = next;
            }
            return prev;
        }
        public static void Main(string[] args)
        {
            ListNode res = ReverseList(new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5))))));

            Console.WriteLine(res.ToString());
        }
    }
}
