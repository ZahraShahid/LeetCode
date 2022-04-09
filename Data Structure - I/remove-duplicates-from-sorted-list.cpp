// Returns the sorted likned list after removing duplicates from it
// https://leetcode.com/problems/remove-duplicates-from-sorted-list/
class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (head == nullptr)
            return nullptr;
        if (head->next == nullptr)
            return head;
        else
        {
            ListNode *curr = head;
            while (curr->next)
            {
                if (curr->val == curr->next->val)
                {
                    curr->next = curr->next->next;
                }
                else
                {
                    curr = curr->next;
                }
            }
            return head;
        }
    }
};