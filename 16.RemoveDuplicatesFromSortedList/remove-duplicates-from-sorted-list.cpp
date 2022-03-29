// Return the head of a linkedlist after removing duplicates from the sorted linkedlist
// https://leetcode.com/problems/remove-duplicates-from-sorted-list/

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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr) return nullptr;
        if(head->next == nullptr) return head;
        else {
            ListNode* curr = head;
            while(curr->next){
                if(curr->val == curr->next->val){
                    curr->next = curr->next->next;
                }else{
                    curr=curr->next;
                }
            }
            return head;
        }
    }
};