// Author: Ashraf
// Link: https://leetcode.com/problems/intersection-of-two-linked-lists/
// Time Complexity: O(n)
// Space Complexity: O(1)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* h) {
        if (!h || !h->next)
            return;
        ListNode *s = h, *f = h;
        while (f && f->next) {
            s = s->next;
            f = f->next->next;
        }
        ListNode *p = nullptr, *c = s->next;
        s->next = nullptr;
        while (c) {
            ListNode* t = c->next;
            c->next = p;
            p = c;
            c = t;
        }
        ListNode *l1 = h, *l2 = p;
        while (l2) {
            ListNode* t1 = l1->next;
            ListNode* t2 = l2->next;
            l1->next = l2;
            l2->next = t1;
            l1 = t1;
            l2 = t2;
        }
    }
};