#include<iostream>
#include<map>
using namespace std ;

class Node {
    public:
    int data ;
    Node* next ;

    // constructor
    Node(int d) {
        this -> data = d ;
        this -> next = NULL ;
    }

    ~Node() {
        int value = this -> data ;
        if(this-> next != NULL) {
            delete next ;
            next = NULL ;
        }
        cout << " memory is free for node with data " << value << endl ;
    }
};

void insertNode(Node* &tail , int element , int d) {
    // assuming that the element is present in the list

    // empty list
    if(tail == NULL) {
        Node* newNode = new Node(d) ;
        tail = newNode ;
        newNode -> next = newNode ;
    }
    else{
        // non-empty list
        // assuming that the element is present in the list

        Node* curr = tail ;

        while(curr -> data != element) {
            curr = curr -> next ;
        }

        // element found -> curr is representing element wala node
        Node* temp = new Node(d) ;
        temp -> next = curr -> next ;
        curr -> next = temp ;
    }
}

void print(Node* tail) {

    Node* temp = tail ;
    // empty list
    if(tail == NULL) {
        cout << "list is empty" << endl ;
        return ;
    }

   do{
        cout << tail -> data << " " ;
        tail = tail -> next;
   } while(tail != temp );
   cout << endl ;
}

void deleteNode(Node* &tail , int value) {
    //  empty list
    if(tail == NULL) {
        cout << "List is empty , please check again " << endl ;
        return ;
    }
    else {
    // non-empty
    // assuming that "value" is present in the linklist 
    Node* prev = tail ;
    Node* curr = prev -> next ;

    while(curr -> data != value) {
        prev = curr ;
        curr = curr -> next ;
    }

    prev -> next = curr -> next ;
    // 1 Node link list 

    if(curr == prev) {
        tail = NULL ;
    }

    // >=2 linked list
    if(tail == curr) {
        tail = prev ;
    }
    curr -> next = NULL ;
    delete curr ;
}
}

bool detectLoop(Node* head) {

    if(head == NULL) 
        return false;

    map<Node* , bool> visited;

    Node* temp = head ;

    while(temp != NULL) {

        // cycle is present
        if(visited[temp] == true) {
            return true ;
        }

        visited[temp] = true;
        temp = temp -> next;
    }
        return false ;
}

int main () {

    Node* node1 = new Node(10) ;
    Node* head = node1 ;
    Node* tail = node1 ;

    insertAtTail(tail ,12);
    insertAtHead(tail , 15);
    insertAtPosition(tail , head , 4 , 22) ;
    // empty list me insert krte h
    insertNode(tail , 5 , 3) ;
    print(tail ) ;
    // insertNode(tail , 3 , 4) ;
    // print(tail ) ;
    // insertNode(tail , 4 , 10) ;
    // print(tail ) ;
    // insertNode(tail , 10 , 7) ;
    // print(tail ) ;
    // insertNode(tail , 7 , 6) ;
    // print(tail ) ;
    // insertNode(tail , 7 , 22) ;
    // print(tail ) ;
    // insertNode(tail , 3 , 100) ;
    // print(tail ) ;
    // insertNode(tail , 6 , 300) ;
    // print(tail ) ;

    deleteNode(tail , 3) ;
    print(tail) ;
    return 0 ;
}