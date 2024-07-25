// Iterative C++ program to reverse a linked list
#include <iostream>
using namespace std;

//node structure
struct Node {
    int data;
    Node* next;
};

class LinkedList {
  private:
    Node* head;
  public:
    LinkedList(){
      head = NULL;
    }
 
    
    void insertAtail(int newElement) {
      Node* newNode = new Node();
      newNode->data = newElement;
      newNode->next = NULL; 
      if(head == NULL) {
        head = newNode;
      } else {
        Node* temp = head;
        while(temp->next != NULL)
          temp = temp->next;
        temp->next = newNode;
      }    
    }
    
    //reverse the list
    void reverseList() {
      if(head != NULL) {
        Node* prevNode = head;
        Node* tempNode = head;
        Node* curNode = head->next;
        
        prevNode->next = NULL;
        
        while(curNode != NULL) {
          tempNode = curNode->next;
          curNode->next = prevNode;
          prevNode = curNode;
          curNode = tempNode;
        }

        head = prevNode;
      }
    } 

    
    void displayList() {
      Node* temp = head;
      if(temp != NULL) {
        cout<<"The list contains after: ";
        while(temp != NULL) {
          cout<<temp->data<<" ";
          temp = temp->next;
        }
        cout<<"\n";
      } else {
        cout<<"The list is empty.\n";
      }
    }   
};


int main() {
  LinkedList MyList;

  
  MyList.insertAtail(10);
  MyList.insertAtail(30);
  MyList.insertAtail(80);
  MyList.insertAtail(50);
  MyList.insertAtail(20);

  
  MyList.displayList();
  
  //Reversing the list.
  MyList.reverseList();
  
  cout<<"After reversing the list"<<endl;
  MyList.displayList();
  
  return 0; 
}