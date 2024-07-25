#include<iostream>
using namespace std;

const int max_size =  100;

	 class queue{
    private:
		int front = -1;
		int rear = -1;
		int arr[max_size];
	public:
		 
			bool is_full(){
				 return rear ==  max_size-1;
			}	
		bool is_empty(){
			 return front == -1;
		}		
        void enqeue(int value){
			if(is_full()){
				cout<<"The Stack is Full";	
			}
		   else{
				if(front == -1){
					front = 0;
					}
				rear++;
				arr[rear] = value;
				}
		}	
		void deqeue(){
		  if(is_empty()){
                 cout<<"The Queue is empty";

			}
		else{
				if(front == rear){
						front = rear = -1;
				}
				else{
					front ++;
				}
			}		
		}	
 		void display(){
				if(is_empty()){
						cout<<"The Qeueue is empty"<<endl;
				}
				else{
						cout<<"Elements: ";
						for(int i = front;i<= rear;i++){
								cout<<arr[i]<<" ";
						}
							cout<<endl;
					}	
				}	
        int peek(){
				if(front == -1){
					cout<<"QEUUE IS EMPTY";
				}
				else{
 					return arr[front];
				}
			}
		int getsize(){
			return (rear -front +1);
		}
		};


int main(){
	queue queue1;
    //queue queue2;
	 int choice,value;
while(true){
      cout<<"Select an option";
      cout<<"MENU:";
	  cout<<"1. ENQUEUE "<<endl;
	  cout<<"2. DEQUEUE"<<endl;
	  cout<<"3. PEEK"<<endl;
	  cout<<"4. DISPLAY"<<endl;
	  cout<<"5. GET SIZE"<<endl;
	  cout<<"6. QUIT"<<endl;
     // int choice,value;
	  cin>>choice;
	  cout<<"Enter Your Choice"<<endl;

	
	  switch(choice){
	   case 1:   
				int element;
					cout<<"Enter The Element to push";
					cin>>element;
					queue1.enqeue(value);
					break;
       case 2:
               queue1.deqeue();
			   break;

	   case 3:
             if(!queue1.is_empty())
			{
				cout<<"Topped Element"<<queue1.peek()<<endl;
			}
             else{
				cout<<"Stack is Empty.Cannot peek A Element"<<endl;
				}
				break;
	 case 4:
            cout<<"The Stack Is Empty"<<queue1.is_empty()<<endl;
			break;
	case 5:
          cout<<"Stack Size"<<queue1.getsize()<<endl;
		  queue1.display();
		 break;
 	case 6:
		cout<<"Existing"<<endl;
        break;
  	default:
		cout<<"INVALID CHOICE.Please enter a valid option";
		}
		
	}
	while(choice != 6);
 	 
	return 0;
	}



