#include<iostream>
using namespace std;
class Stack{
    private:
     static const int MAX_SIZE=100;
     //stack elements
     int arr[MAX_SIZE];
     //top of stack
     int top;
    
    public:
    Stack();
    void push(int data);
    void  pop();
    bool isEmpty();
    bool isFull();
    int peek();
    int getsize();
};
Stack::Stack(){
     top=-1;
}
    bool Stack ::isEmpty(){
        if (top==-1) {
            return true;
        }
        else return false;
    }
    bool Stack :: isFull(){
        if (top == MAX_SIZE - 1)
        return true;
        else 
        return false;
    }

void Stack::push(int x){
    if(!isFull()){
        top++;
        arr[top]=x;
    }               
    else cout<<"Stack Overflow"<<endl;
    
}
void Stack::pop(){
    if (!isEmpty()) {
        top--;
        }
    else 
    cout << "Underflow" << endl;
}
int Stack::peek(){
    if (!isEmpty()) {
        return arr[top];
    }
    else{
        cout << "Underflow,element is'nt available" << endl;
    }
}
int Stack::getsize(){
    return top+1;
}
int main(){
Stack s1;
s1.push(5);
s1.push(9);
s1.push(4);
s1.pop();
cout<<"The element at the top of stack is:"<<s1.peek()<<endl;



    return 0;
}