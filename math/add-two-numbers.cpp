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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * resultHead = new ListNode(0);
        ListNode* result = resultHead;
        int carry = 0;
        
        while(l1!=nullptr || l2!=nullptr || carry != 0){    
            int l1Sum = (l1!=nullptr) ? l1->val : 0;
            int l2Sum = (l2!=nullptr) ? l2->val : 0;

            int sum = l1Sum + l2Sum + carry;
            carry = sum/10;
            sum = sum%10;

            ListNode* curr = new ListNode(sum);
            result->next = curr;

            l1 = (l1!=nullptr) ? l1->next : l1;
            l2 = (l2!=nullptr) ? l2->next : l2;
            result = result->next;
        }

        return resultHead->next;
    }
};