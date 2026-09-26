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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int totalLen = 0;
        ListNode* temp = head;

        while(temp!=nullptr){
            temp = temp->next;
            totalLen++;
        }

        int deletePos = totalLen-n;

        if(deletePos == 0){
            return head->next;
        }

        ListNode* prev = head;
        for(int i=0; i<deletePos-1; i++){
            prev = prev->next;
        }

        prev->next = prev->next->next;

        return head;
    }
};