#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;  //pointer to the next node in the list.

    Node(int val){
        data = val;
        next=nullptr;   //initially there is no link with any other node.
       }
};
class CircularLL{
    private:
    Node *head;
    public:
    CircularLL(){
        head = nullptr;
    }
    void insertatbegining(int val){
        Node* newNode = new Node(val);
        if(head==nullptr){
            head = newNode;
            newNode->next = head;     //making it circular by linking last to first.
        }
        else{
            Node* temp=head;
            while(temp->next!=head){//finding the last node so that we can add
            temp=temp->next;
            }      //new node at the beginning.  
            temp->next=newNode;
            newNode->next=head;
            head=newNode;
        }
    }
    void insertatend(int val){
        Node* newNode = new Node(val);
        if (head== nullptr){
            head=newNode;
            newNode->next=head;
        }
        else{
            Node* temp=head;
            while(temp->next !=head){
                temp=temp->next;
            }
            temp->next=newNode;
            newNode->next=head;
        }
    }
    void deleteAtBeginning() {
    if (head == NULL) {
        cout << "List is Empty" << endl;
        return ;
    }
    if (head->next == head) { // Only one element in the list
        delete head;
        return ;
    }
    Node* temp = head->next;
    Node* current = head;
    while (current->next != head) {
        current = current->next;
    }
    current->next = temp;
    delete head;
    head= temp;
}
    void deletefromend(){
        if(head == nullptr){
            cout<<"List is empty, nothing to delete.\n";
            return ;
        }
        if(head->next==head){
            delete head;
            return;
        }
        else{
            Node*curr=head;
            while(curr->next->next!=head){
            curr=curr->next;
            }
            Node* temp=curr->next;
            curr->next=head;
            delete temp;
        }
    }
    void display(){
        if (head==nullptr) {
            cout << "The list is empty." << endl;
            return;
        }
        Node* temp = head;
        do {
            cout << temp ->data <<  " ";
            temp = temp->next;
            }while(temp != head);
            cout << "\n";
            }

    
    };

int main(){
    CircularLL l1;
    //Adding elements in the linkedlist
    l1.insertatbegining(30);
    l1.insertatbegining(45);
    l1.insertatend(67);
   l1.deleteAtBeginning();
    l1.deletefromend();
    l1.display();



    return 0;
}





// #include <iostream>

// // Node structure for the circular linked list
// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int val) {
//         data = val;
//         next = nullptr;
//     }
// };

// // Circular linked list class
// class CircularLinkedList {
// private:
//     Node* head;

// public:
//     CircularLinkedList() {
//         head = nullptr;
//     }

//     // Function to insert a node at the beginning of the list
//     void insertAtBeginning(int val) {
//         Node* newNode = new Node(val);
//         if (head == nullptr) {
//             head = newNode;
//             newNode->next = head;
//         } else {
//             Node* temp = head;
//             while (temp->next != head) {
//                 temp = temp->next;
//             }
//             temp->next = newNode;
//             newNode->next = head;
//             head = newNode;
//         }
//     }

//     // Function to insert a node at the end of the list
//     void insertAtEnd(int val) {
//         Node* newNode = new Node(val);
//         if (head == nullptr) {
//             head = newNode;
//             newNode->next = head;
//         } else {
//             Node* temp = head;
//             while (temp->next != head) {
//                 temp = temp->next;
//             }
//             temp->next = newNode;
//             newNode->next = head;
//         }
//     }

//     // Function to delete a node by value
//     void deleteNode(int val) {
//         if (head == nullptr) {
//             std::cout << "List is empty, deletion not possible." << std::endl;
//             return;
//         }

//      Function to display the circular linked list
//     void display() {
//         if (head == nullptr) {
//             std::cout << "List is empty." << std::endl;
//             return;
//         }

//         Node* temp = head;
//         do {
//             std::cout << temp->data << " ";
//             temp = temp->next;
//         } while (temp != head);
//         std::cout << std::endl;
//     }
// };

// int main() {
//     CircularLinkedList list;
//     list.insertAtBeginning(5);
//     list.insertAtEnd(10);
//     list.insertAtEnd(15);
//     list.display(); // Output: 5 10 15

//     list.deleteNode(10);
//     list.display(); // Output: 5 15

//     return 0;
// }    Node* temp = head;
//         Node* prev = nullptr;

//         // If node to be deleted is the head node
//         if (temp->data == val) {
//             while (temp->next != head) {
//                 temp = temp->next;
//             }
//             temp->next = head->next;
//             delete head;
//             head = temp->next;
//         } else {
//             while (temp->next != head && temp->data != val) {
//                 prev = temp;
//                 temp = temp->next;
//             }
//             if (temp->data == val) {
//                 prev->next = temp->next;
//                 delete temp;
//             } else {
//                 std::cout << "Value not found in the list." << std::endl;
//             }
//         }
//     }

    //
