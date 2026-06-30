// Author: Ashraf
// Link: https://leetcode.com/problems/copy-list-with-random-pointer/
// Time Complexity: O(n)
// Space Complexity: O(1)
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head)
            return NULL;

        Node* p = head;
        while (p) {
            Node* t = new Node(p->val);
            t->next = p->next;
            p->next = t;
            p = t->next;
        }

        p = head;
        while (p) {
            if (p->random) {
                p->next->random = p->random->next;
            }
            p = p->next->next;
        }

        p = head;
        Node* d = new Node(0);
        Node* c = d;

        while (p) {
            c->next = p->next;
            c = c->next;

            p->next = p->next->next;
            p = p->next;
        }

        Node* ans = d->next;
        delete d;
        return ans;
    }
};