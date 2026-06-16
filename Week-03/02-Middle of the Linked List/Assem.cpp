// Author: Assem
// Problem:  Middle of the Linked List
// Link: https://leetcode.com/problems/middle-of-the-linked-list/
// Time: O(n) | Space: O(n)

#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        ListNode *curr = head;
        int index = 0;
        int length = 0;

        while (curr)
        {
            length++;
            curr = curr->next;
        }

        curr = head;

        while (index != ((length / 2) + 1))
        {
            index++;
            curr = curr->next;
        }
        return curr;
    }
};

int main()
{
    return 0;
}
