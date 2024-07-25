#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;  //pointer to the next node in the list.

    Node(int value){
        this->data = value;
        this->next=NULL;

    }
};
class stack{
    Node*top;
    public:
    stack(){
        top= NULL;
    }
    void push (int value) {
        Node *newNode = new Node(value);
        if (top == NULL) {
            top = newNode;
            top -> next = NULL;
        }
        else {
            newNode->next = top;
            top =newNode;

        }

    }
    void pop(){
        if (top==NULL) {
            cout<<"Stack is empty, cannot remove element\n";
            return ;
            }
            Node *temp = top;
            top = top->next;
            delete temp;
            
           

    }
    bool isEmpty(){
        return (top == NULL);
    }
    int peek() {
        if (isEmpty()) {
            cout << "Stack is Empty \n";
            exit(0);
        }
        return top->data;
    }
    
};
int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "\n The top element is " << s.peek();
    s.pop();
    cout << "\n The top element is " << s.peek();




    return 0;
}