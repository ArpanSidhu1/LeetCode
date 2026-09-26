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
    ListNode* removeElements(ListNode* head, int target) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* current = dummy;

        while (current->next != nullptr) {
            if (current->next->val == target) {
                ListNode* temp = current->next;
                current->next = temp->next;
                delete temp; // Free the memory of the removed node
            } else {
                current = current->next;
            }
        }

        ListNode* newHead = dummy->next;
        delete dummy; // Free the memory of the dummy node
        return newHead;
    }
};
