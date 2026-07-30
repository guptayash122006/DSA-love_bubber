// #include<iostream>
// using namespace std ;

// class Node{
// public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data = data;
//         next = NULL;
//     }
// };
// bool isCircularList(Node* head) {
//     if(head == NULL) {
//         return true ;
//     }

//     Node* temp = head -> next ;
//     while(temp != NULL && temp != head) {
//         temp = temp -> next ;
//     }

//     if(temp == head) {
//         return true ;
//     }

//     return false ;
// }

// int main () {

// Node* tail = NULL ;
// if(isCircularList(tail)) {
//     cout<<"Linklist is circular nature" << endl ;
// }
// else{
//     cout<<"Linklist is not circular" << endl ;
// }
// }



#include<iostream>
#include<map>
using namespace std ;

class Node {
    public:
        int data;
        Node* next;

        Node(int data) {
            this -> data = data ;
            next = NULL ;
        }
};

bool isCircularList(Node* head) {
    if(head == NULL) 
        return true ;

    map<Node* , bool> visited;

    Node* temp = head ;

    while(temp != NULL) {
        if(visited[temp] == true) {
            if(temp == head) 
                return true ;
            else 
                return false ;
        }

        visited[temp] = true ;
        temp = temp -> next ;
    }
    return false ;
}

int main () {

    Node* tail = NULL ;
if(isCircularList(tail)) {
    cout<<"Linklist is circular nature" << endl ;
}
else{
    cout<<"Linklist is not circular" << endl ;
}
}