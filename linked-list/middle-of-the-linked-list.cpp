class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int length = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            length++;
            temp = temp->next;
        }
        int mid = 0;
        mid = length/2;
        length = 0;
        temp = head;
        while(temp!=NULL){
            if(length == mid){
                return temp;
            }
            length++;
            temp = temp->next;
        }
        return temp;
    }
};