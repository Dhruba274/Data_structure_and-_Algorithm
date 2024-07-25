#include<iostream>
#include<string>

using namespace std;	

const int max_size =  100;

class Stack
{
	private:
	    char item[max_size];
		int top;
	public:
		Stack(){
			top =-1;
		}
	
	 bool is_empty(){
		return (top == -1);
	}
	bool is_full(){
		return ( top ==max_size - 1);
	}
	 void push(char x){
		if(!is_full()){
			top++;
			item[top] = x;
		}
		else{
			cout<<"The Stack Overflow";
		}
	}
	void pop(){
	 		if(!is_empty()){
				int popped_item =item[top];
				top--;
				return ;
			}
			else{
				cout<<"Stack Is Empty.Cannot Pop A Element";
				return ;
			}
	}
	char peek(){
	         if(!is_empty()){
		     	 return item[top];
			}
				else{
	 				cout<<"Stack is empty.Cannot peek Element";
					return -1;
				}
			
	}
 	void display(){
		cout<<"Stack: ";
		for(int i=0;i<= top;i++){
		cout<<item[i]<<" ";
		}
		cout<<endl;
		}
    int getsize(){
	 		return top +1;
		}

};

int main(){
	 Stack stack;
	 int choice;
do{
      cout<<"MENU:";
	  cout<<"1. Push element from the stack"<<endl;
	  cout<<"2. Pop element from the stack"<<endl;
	  cout<<"3. Peek at the top element"<<endl;
	  cout<<"4. Check if the stack is empty"<<endl;
	  cout<<"5. Display Stack Elements"<<endl;
	  cout<<"6. QUIT"<<endl;
	  cout<<"Enter Your Choice"<<endl;
	  cin>>choice;
	
	  switch(choice){
	   case 1:
				int element;
					cout<<"Enter The Element to push";
					cin>>element;
					stack.push(element);
					break;
       case 2:
            if(!stack.is_empty())
			{
				cout<<"Popped Elemen" <<stack.peek()<<endl;
			}
			else{
				cout<<"Stack is Empty.Cannot pop Element"<<endl;
				}

				break;

	   case 3:
             if(!stack.is_empty())
			{
				cout<<"Topped Element"<<stack.peek()<<endl;
			}
             else{
				cout<<"Stack is Empty.Cannot peek A Element"<<endl;
				}
				break;
	 case 4:
            cout<<"The Stack Is Empty"<<stack.is_empty()<<endl;
			break;
	case 5:
          cout<<"Stack Size"<<stack.getsize()<<endl;
		  stack.display();
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


