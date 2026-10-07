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
        if (head == NULL) {
            return NULL;
        }

        unordered_map<Node*, Node*> map;

        Node* temp = head;

        while (temp != NULL) {
            Node* copy = new Node(temp->val);
            map[temp] = copy;
            temp = temp->next;
        }

        temp = head;

        while (temp != NULL) {
            Node* copy = map[temp];

            copy->next = map[temp->next];
            copy->random = map[temp->random];

            temp = temp->next;
        }

        return map[head];
    }
};