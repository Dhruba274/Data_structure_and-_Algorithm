#include<iostream>
using namespace std;

class  Linkedlist{
private:

			struct Node{
			int data;
			Node* next;
			Node(int val) : data(val),next(nullptr){}
		 };
			Node* head;
		public:
			Linkedlist():head(nullptr){}
	void insertatbegining(int val){
			Node* newNode = new Node(val);
			newNode->next = head;
			head = newNode;
	}
	void insertatend(int val){
				Node* newNode = new Node(val);
				if(!head){
							head = newNode;
				}else{
					Node* temp = head;
					while(temp -> next){
							temp = temp ->next;
					}
						temp -> next = newNode;
				}
			}
			void deleteFrombeginning(){
					if(!head){
								cout<<"List Is Empty.Cannot Delete "<<endl;
								return;
						}
							Node* temp = head;
							head = head-> next;
							delete temp;
					}
			void deletefromend(){
						if(!head){
								cout<<"List Is Empty.Cannot Delete "<<endl;
								return;
						}
						if(!head->next){
							delete head;
							head = nullptr;
							return;
						}
					Node* prev = nullptr;
					Node* current = head;
					while(current -> next){
							prev = current;
							current = current -> next;
						}
					delete current;
					prev -> next = nullptr;
}

			void display(){
					Node* temp = head;
					while(temp){
						cout<<temp->data<<" ";
						temp = temp->next;
						}
					cout<<endl;
		}
		bool search(int value){
				Node* temp = head;
					while(temp){
						if(temp-> data == value){
							return true;
							}
						temp = temp -> next;
					}
						return false;
		}
	



	};

int main(){
		Linkedlist list;
		int choice,value;
		do{
			cout<<"\nMenu\n";
			cout<<"\n1.Add At Begining";
			cout<<"\n2.Add At End";
            cout<<"\n3.Delete At Begining";
			cout<<"\n4.Delete At End";
			cout<<"\n5.Display";
			cout<<"\n6. Search";
			cout<<"\n7.Reverse";
			cout<<"\n7.quit\n";
			cout<<"\nEnter Your Choice ";	
			cin>>choice;
				switch(choice){
					case 1:
							cout<<"Enter Value To Add Begining ";
							cin>>value;
							list.insertatbegining(value);
							break;

					case 2:
							cout<<"Enter Value To Add at End ";
							cin>>value;
							list.insertatend(value);
							break;
					case 3:
							list.deleteFrombeginning();
							break;
					case 4:
						list.deletefromend();
							break;
					case 5:
						   cout<<"Linked List Element";
							list.display();
							break;
					case 6:
							cout<<"Enter Value To Search";
							cin >>value;
							if(list.search(value)){
								cout<<"Value found at linked list"<<endl;
							}
							else{
									cout<<"Value Not Found At Linked List";
							}
							break;
					case 7:
							cout<<"Exit"<<endl;
							break;

							
					default:
							cout<<"\nInvalid Choice !"<<endl;

						}
			}while(choice!=6);
			return 0;
}





