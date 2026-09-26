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
    bool isPalindrome(ListNode* head) {
    stack<int> st;
    struct ListNode *ptr;
    ptr=head;
    while(ptr!=nullptr){
        st.push(ptr->val);
        ptr = ptr->next;
    }    

    ptr = head;
    while(!st.empty()){
        if(st.top()!=ptr->val){
            return false;
        }
        else
        {
            st.pop();
            ptr = ptr->next;
        }
    }
    return true;
    }
};