#include<iostream>
using namespace std;
class queue{
    private: //private elements
    static const int MAX_SIZE=100;
    int arr[MAX_SIZE];
    int front;
    int rear;

    public:
    queue();

    bool isEmpty();
    bool isFull();
    void enqueue(int value);
    void dequeue();
    int peek();
    int getsize();

};
queue :: queue(){ //constructor
    front=-1;
    rear=-1;
}
bool queue::isEmpty() //check if the queue is empty or not.
{
    return (front==-1 && rear == -1);
}
bool queue::isFull()//check if the queue is full or not.
{
    return  ( rear==MAX_SIZE-1 );
}

void queue :: enqueue(int x){
    if(!isFull()){
        rear++;
        arr[rear]=x;
    }
    else{
        cout<<"Queue Overflow"<<endl;
    }
}
void queue :: dequeue(){
    if(!isEmpty()) {
        front++;
        cout<<"deleted item is "<<arr[front]<<endl;
    }
    else {
        cout<<"Queue Underflow"<<endl;
    }
        
    }
    int queue :: peek(){
        if (!isEmpty()) {
            return arr[front+1];
        }
        else{
            cout << "Queue Underflow" << endl;
            return -1;
        }
    }
    int queue :: getsize(){
        return (rear - front +1);
    }
    int main(){
        queue q;
        q.enqueue(20);
        q.enqueue(30);
        q.enqueue(40);
        q.enqueue(50);
        q.enqueue(60);
        //q.dequeue();
        q.dequeue();
    
            cout<<"Peek item in queue is "<<q.peek()<<endl;
           cout<< q.getsize();


        return 0;
    }