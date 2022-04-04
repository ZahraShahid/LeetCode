// Returns linked list after swapping the kth node with the kth node from the end
// https://leetcode.com/problems/swapping-nodes-in-a-linked-list/

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
class Solution
{
public:
    ListNode *swapNodes(ListNode *head, int k)
    {
        if (head == NULL)
            return NULL;
        ListNode *p1 = head;
        int index = 1;
        while (index != k)
        {
            p1 = p1->next;
            index++;
        }
        ListNode *p2 = p1;
        while (p2->next != NULL)
        {
            p2 = p2->next;
            index++;
        }
        int newIndex = index - k + 1;
        p2 = head;
        index = 1;
        while (index != newIndex)
        {
            p2 = p2->next;
            index++;
        }
        int temp = p1->val;
        p1->val = p2->val;
        p2->val = temp;
        return head;
    }
};