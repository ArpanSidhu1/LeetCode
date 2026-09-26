struct Node{
    int key;
    int val;
    Node* prev;
    Node* next;

    Node(int key,int val){
        this->key = key;
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

class LRUCache {
public:
    int cap;
    unordered_map<int,Node*> mp;
    Node*  head = new Node(-1,-1);
    Node* tail = new Node(-1,-1);

    LRUCache(int capacity) {
        this->cap = capacity;
        head->next = tail;
        tail->prev = head;
    }
    
    int get(int key) {
        if(mp.find(key)!=mp.end()){
            Node* temp = mp[key];
            deleteNode(temp);
            moveToFirst(temp);
            return temp->val;
        }else{
            return -1;
        }
    }

    void moveToFirst(Node* temp){
        temp->next = head->next;
        head->next->prev = temp;
        head->next = temp;
        temp->prev = head;
    }

    void deleteNode(Node* temp){
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
    }
    
    void put(int key, int value) {
        if(mp.find(key)!=mp.end()){
            Node* temp = mp[key];
            temp->val = value;
            deleteNode(temp);
            moveToFirst(temp);
        }else{
            if(mp.size() == cap){
                Node* temp = tail->prev; 
                mp.erase(temp->key);
                deleteNode(temp);  
                delete temp;
            }
            Node* t1 = new Node(key,value);   
            mp[key] = t1;
            moveToFirst(t1);
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */