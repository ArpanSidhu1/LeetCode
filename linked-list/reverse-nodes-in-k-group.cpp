class Solution {
public:

    ListNode* getReverseList(ListNode* head, int k) {
        ListNode* prev = nullptr;

        while (k--) {
            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }

        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {

        ListNode* temp = head;

        ListNode* result = new ListNode(-1);
        ListNode* tail = result;

        while (temp != nullptr) {

            int count = 0;
            ListNode* check = temp;

            // Check if k nodes exist
            while (check != nullptr && count < k) {
                check = check->next;
                count++;
            }

            // Less than k → don't reverse
            if (count < k) {
                tail->next = temp;
                break;
            }

            // Original first node becomes the tail
            ListNode* groupTail = temp;

            // Reverse exactly k nodes
            tail->next = getReverseList(temp, k);

            // Move tail to the end of this reversed group
            tail = groupTail;

            // Move to next group
            temp = check;
        }

        return result->next;
    }
};