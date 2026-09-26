/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*> ump;
        Node * temp = head;

        while(temp!=NULL){
            Node* newNode = new Node(temp->val);
            ump[temp] = newNode;
            temp = temp->next;
        }

        temp = head;
        Node* result = new Node(-1);
        Node* dummy = result;

        while(temp!=NULL){
            dummy = ump[temp];
            dummy->next = ump[temp->next];
            dummy->random = ump[temp->random];
            temp = temp->next;
            dummy = dummy->next;
        }

        return ump[head];
    }
};