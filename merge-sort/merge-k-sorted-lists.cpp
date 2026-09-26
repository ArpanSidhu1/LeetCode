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
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        if (lists.empty()) return nullptr;

        // Result Node.
        ListNode* mergeList = lists[0];

        for(int i=1; i<lists.size(); i++){
            // Next Node to Insert.

            ListNode* nodeToInsert = lists[i];
            while(nodeToInsert!=nullptr){

                // if Merge List element is Greateer then Node to Insert at first Position.
                if(mergeList == nullptr || nodeToInsert->val<mergeList->val){
                    ListNode* nextNodeToInsert = nodeToInsert->next;

                    nodeToInsert->next =  mergeList;

                    mergeList = nodeToInsert;
                    
                    nodeToInsert = nextNodeToInsert;

                    continue;
                }

                ListNode* currentNode = mergeList;
                ListNode* resultNode = nodeToInsert; 

                while(currentNode->next!=NULL && currentNode->next->val<= resultNode->val){
                    currentNode = currentNode->next;
                }

                ListNode* nextNodeToInsert = nodeToInsert->next;

                ListNode* nextNode = currentNode->next;
                currentNode->next = resultNode;
                resultNode->next = nextNode;

                nodeToInsert = nextNodeToInsert;
            }
        }

        return mergeList;
    }
};