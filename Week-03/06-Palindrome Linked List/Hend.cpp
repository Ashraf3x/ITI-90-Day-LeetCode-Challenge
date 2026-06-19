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
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true;
        ListNode* slow=head;
        ListNode* fast=head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        ListNode* curr=slow;
        ListNode* prev=nullptr;
        while(curr){
            ListNode* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        ListNode* firstHalf = head;
        ListNode* secondHalf = prev;

        while(secondHalf){
            if(firstHalf->val== secondHalf->val){
                secondHalf=secondHalf->next;
                firstHalf=firstHalf->next;
            }else return false;
        }
        return true;

    }
};