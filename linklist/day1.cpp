#include<iostream>
using namespace std ;

class Node {
    public:

    int data ;
    Node* next ; 

     Node(int data) {
        this -> data = data ;
        this -> next = NULL ;
 }

    ~Node() {
        int value = this -> data ;
        // memory free
        if(this -> next != NULL) {
            delete next ;
            this -> next = NULL ;
        }
        cout << "memory is free node with data" ;
    }
};

    void InsertAtHead(Node* &head , int d) {

        // new node create 
        Node* temp = new Node(d) ;
        temp -> next = head ;
        head  = temp ; 

    }

    void InsertAtTail(Node* &Tail , int d) {

        // new node create 
        Node* temp = new Node(d) ;
       Tail -> next = temp ; 
       Tail = Tail -> next ;

    }

    void insertAtPosition(Node* &head ,  Node* &Tail ,  int position , int d) {
        
        // inserting a first position 
        if(position == 1) {
            InsertAtHead(head , d);
            return ;
        }

        Node* temp = head ;
        int cnt =1 ; 
        
        while(cnt < position -1) {
            temp = temp -> next ;
            cnt++ ; 
        }

        // inserting at last position
        if(temp -> next == NULL) {
            InsertAtTail(Tail , d) ;
            return ;
        }

        // creating a node for d
        Node* nodeToInsert = new Node(d) ;

        nodeToInsert -> next = temp -> next ;
        temp -> next = nodeToInsert ;
    }

    void print(Node* &head) {
        Node* temp = head ;
        while(temp != NULL) {
            cout << temp -> data << " " ; 
            temp = temp -> next ;
            
        }
        cout << endl ; 
    }

    void deleteNode(int position  , Node* & head) {
        // delete first or start node 
        if(position ==1) {
            Node* temp = head ;
            head = head -> next ;
            // memory free start node
            temp -> next = NULL ;
            delete temp ;
        }

        else{
            // deleting any middle node and last node
            Node* curr = head ;
            Node* prev = NULL ;

            int cnt = 1 ;
            while(cnt < position) {
                prev = curr ;
                curr = curr -> next ;
                cnt++ ;
            }

            prev -> next = curr -> next ;
            curr -> next = NULL;
            delete curr ;
        }
    }


int main () {

    // created a new node 
    Node* node1 = new Node(10)  ;
    // cout << node1 -> data << endl ;
    // cout << node1 -> next << endl ;

    // head pointed to node1  
    Node* head = node1 ;
    Node* tail = node1 ; 
    print(head) ;

    InsertAtTail(tail , 12) ;
    print(head) ;

    InsertAtTail(tail , 15) ;
    print(head) ;

    insertAtPosition(head , tail  , 4 , 22) ;
    print(head) ;

    cout << "head" << head -> data << endl ;
    cout << "tail" << tail -> data << endl ;

    return 0 ;
}