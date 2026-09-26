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
        ListNode* List = new ListNode();
        ListNode* Tlist = List;
        set<int> myset;
        while(head!=NULL){
                myset.insert(head->val);
                head=head->next;
        }
    for(int value : myset){
        Tlist->next = new ListNode(value);
        Tlist = Tlist->next;
    }
    return List->next;    
    }
};