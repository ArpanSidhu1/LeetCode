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
    ListNode* doubleIt(ListNode* head) {
    struct ListNode* prev=NULL;
    struct ListNode* ptr;
    ptr = head;
    struct ListNode* temp = new ListNode();
    while(ptr!=NULL){
        int doub = (ptr->val)*2;
        int num = doub%10;
        int carry = doub/10;
        ptr->val = num;
        if(carry!=0){
            if(prev==NULL){
                temp->val = carry;
                head=temp;
                temp->next = ptr;
            }
            else{
                prev->val += carry;
                prev = ptr;
            }
        }
    prev = ptr;
    ptr = ptr->next;    
    }
    return head;
    }
};