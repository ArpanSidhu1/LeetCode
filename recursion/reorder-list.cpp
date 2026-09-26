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
    void reorderList(ListNode* head) {
        // First Reversing the Linked List.
        ListNode* resultHead = new ListNode(0);
        ListNode* result = resultHead;

        ListNode* temp = head;
        ListNode* prev = nullptr;
        int len = 0;
        while (temp != nullptr) {
            ListNode* newNode = new ListNode(temp->val);  // NEW node, not reusing temp itself
            newNode->next = prev;
            prev = newNode;
            temp = temp->next;
            len++;
        }

        bool isFlip = 1;
        while(len!=0 && head!=NULL && prev!=NULL){
            if(isFlip){
                ListNode* newElement = head;
                head = head->next;
                isFlip = 0;
                result->next = newElement;
            } else{
                ListNode* newElement = prev;
                prev = prev->next;
                isFlip = 1;
                result->next = newElement;
            }
            len--;
            result = result->next;
        }
        result->next = nullptr;

        head =  resultHead;
    }
};