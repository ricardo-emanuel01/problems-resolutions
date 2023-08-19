# include <unordered_map>


class LRUCache {
    public:
        class Node {
            public:
                int value;
                int key;
                Node *prev;
                Node *next;

                Node (int k, int v) {
                    key = k;
                    value = v;
                }
        };

        Node *head = new Node(-1, -1);
        Node *tail = new Node(-1, -1);


        int capacity;
        unordered_map<int, Node *> map;

        LRUCache (int cap) {
            capacity = cap;
            head->next = tail;
            tail->prev = head;
        }


        void addNode(Node *newNode) {
            Node *temp = head->next;
            head->next = newNode;
            newNode->prev = head;
            temp->prev = newNode;
            newNode->next = temp;
        }


        void deleteNode(Node *nodeToDel) {
            Node *toDelPrev = nodeToDel->prev;
            Node *toDelNext = nodeToDel->next;
            toDelPrev->next = toDelNext;
            toDelNext->prev = toDelPrev;
        }


        int get(int key) {
            if (map.find(key) != map.end()) {
                Node *temp = map[key];
                int ans = temp->value;
                map.erase(key);
                deleteNode(temp);
                addNode(temp);
                map[key] = head->next;
                return ans;
            }
            return -1;
        }


        void put(int key, int value) {
            if (map.find(key) != map.end()) {
                Node *temp = map[key];
                map.erase(key);
                deleteNode(temp);
            }
            if (map.size() == capacity) {
                Node *temp = tail->prev;
                map.erase(temp->key);
                deleteNode(temp);
            }
            addNode(new Node(key, value));
            map[key] = head->next;
        }
};