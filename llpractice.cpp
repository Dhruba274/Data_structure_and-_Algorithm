#include<iostream>
using namespace std;
 class Node{
    public:
    int data;
    Node* next;
        Node(int value){
            data=value;
            next = NULL;
        }

};
class LinkedList{
Node *head; // head of list
public :
LinkedList() {
    head = NULL;
}
~LinkedList(){
    while (head != 0) {
        Node* temp = head;
        head = head->next;
        delete temp;
        }
    }
void insertatbegining(int val);
void insertatend(int val);
void display();
void deleteFrombeginning();
void deletefromend();
};
// Insert a new node at the beginning of the linked list.
void LinkedList::insertatbegining(int val){
    Node* newNode=new Node(val);
    newNode->next=head;
    head=newNode;
    
}

//Insert a new node at the end of the linked list.
void LinkedList::insertatend(int val){
    if(head==NULL)
    insertatbegining(val);
    else{
        Node* newNode=new Node(val);
        Node* temp=head;
        while(temp->next!=NULL){
        temp=temp->next;
        }
        temp->next=newNode;
    }
 
}
/* Delete the first node (head) of the linked list */
void LinkedList::deleteFrombeginning(){
    if(!head) return ;
    Node*temp=head;
    head=head->next;
    delete temp;
}
void LinkedList::deletefromend(){
    if(head==NULL){
        return;
    }
    // If there is only one node in the linked list, then make the head as NULL.
    if(head->next==NULL){ 
        delete head;
        head=NULL;
        return;
    }
    Node* current=head;
    while(current->next->next!=NULL){
        current=current->next;
    }
    delete current->next;
    current->next=NULL;
    cout<<"Item Deleted from end"<<endl;
}
void LinkedList::display(){
    Node *ptr;
    ptr = head;
    if (!ptr) {
        cout << "No data in List!" << endl;
        return;
        } else {
            cout << "Data in List:" << endl;
            while (ptr != NULL) {
                cout << ptr->data << " ";
                ptr = ptr->next;
                }
                cout << "\n";
                }
}
int main(){

LinkedList l1;
l1.insertatend(50);
l1.insertatbegining(20);
l1.display();

    return 0;
}