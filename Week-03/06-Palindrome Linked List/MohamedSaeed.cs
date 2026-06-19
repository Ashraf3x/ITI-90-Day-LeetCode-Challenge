public class Solution {
    public bool IsPalindrome(ListNode head) {
        if (head == null || head.next == null) return true;

        // Step 1: find middle using slow/fast pointers
        ListNode slow = head, fast = head;
        while (fast != null && fast.next != null) {
            slow = slow.next;
            fast = fast.next.next;
        }

        // Step 2: reverse second half starting at slow
        ListNode secondHalf = ReverseList(slow);
        ListNode firstHalf = head;

        // Step 3: compare both halves
        ListNode secondHalfCopy = secondHalf; // keep reference to restore later (optional)
        bool result = true;
        while (secondHalf != null) {
            if (firstHalf.val != secondHalf.val) {
                result = false;
                break;
            }
            firstHalf = firstHalf.next;
            secondHalf = secondHalf.next;
        }

        // Step 4 (optional): restore the list by reversing again
        ReverseList(secondHalfCopy);

        return result;
    }

    private ListNode ReverseList(ListNode head) {
        ListNode prev = null;
        while (head != null) {
            ListNode next = head.next;
            head.next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
}
