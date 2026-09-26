class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (!head || !head->next) {
            return head; // No need to swap if there are less than 2 nodes.
        }

        ListNode* ptr = head;
        ListNode* forw = nullptr;
        ListNode* prev = nullptr;
        head = head->next; // Update the new head.

        while (ptr && ptr->next) {
            forw = ptr->next;
            ptr->next = forw->next;
            forw->next = ptr;

            if (prev) {
                prev->next = forw;
            }

            prev = ptr;
            ptr = ptr->next;
        }

        return head;
    }
};
