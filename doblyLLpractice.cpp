#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next; // pointer to the next node in the list.
    Node *prev;
    Node(int val)
    {
        this->data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class DLL
{
    Node *head;

public:
    DLL(){
        head = NULL;
    }
    ~DLL(){
			while(head!=NULL){
				Node* temp = head;
				head = head->next;
				delete head;																
			}
		}
		
		void insertatbegining(int value);
		void insertatend(int value);
		void deleteanyposition(int );
		void deletebegining();
		void deleteatend();
		void display();
};
//Insert a new element at the beginning of the Doubly Linked List
void DLL::insertatbegining(int value){
    Node* nn = new Node(value);
    if (head == NULL){
        head=nn;
        return ;
    }
    else{
        nn -> next = head;
        head-> prev = nn;
        head = nn;
    }

}
//Insert a new element at the end of the Doubly Linked List
void DLL::insertatend(int value) {
    Node* nn = new Node(value);  //0 is passed
    Node* temp = head;
    if(!head){
        insertatbegining(value);
    }
    else{
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = nn;
        nn->prev = temp;
        
    }
}
//Delete any node from the Doubly Linked list given its position.
// void DLL::deleteanyposition(int pos) {
//     int i = 1;
//     Node *temp = head, *dellink;
// }
void DLL::deletebegining() {
    if(!head){
        cout << "The Doubly Linked List is empty.\n";
        return;
    }
    Node* temp = head;
    head = head->next;
    head->prev = NULL;
    delete temp;
}
void DLL::deleteatend() {
    if (!head) {
        cout << "The Doubly Linked List is empty.\n";
        return;
        }
        else if(head->next==NULL){
            delete(head);
            head=NULL;
            cout<<"List is empty"<<endl;
        }
        else {
        Node*curr=head;
       while(curr->next->next!=NULL){
        curr=curr->next;
       }
       Node*temp=curr->next;
       curr->next=NULL;
       delete temp;

    }   

}
void DLL :: display(){
    Node* ptr = head;
    if (ptr == NULL){
        cout << "The Doubly Linked List is empty." << endl;
        return ;

    }
    while(ptr != NULL){
        cout << ptr ->data <<  " ";
        ptr = ptr -> next;

    }
    cout << "\n";
    

}

int main(){ 
    DLL dl;
    dl.insertatbegining(500);
    dl.insertatend(600);
    dl.insertatbegining(400);
    dl.insertatbegining(100);
    dl.deletebegining();
    dl.deleteatend();
    dl.display();
    return 0;
}