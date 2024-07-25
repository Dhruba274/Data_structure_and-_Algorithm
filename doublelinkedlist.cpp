#include<iostream>
using namespace std;

class Node{
	public:	
		Node* prev;
		int data;
		Node* next;
	Node(int value){
		data = value;
		next =NULL;
		prev = NULL;
	}
};

class DLL{
		Node* head;
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
		void Display();

};

		void DLL :: insertatbegining(int value){
						Node* newNode = new Node(value);
						newNode ->next = head;
							if(head!=NULL){
								head->prev =newNode;
								head = newNode;
								cout<<"Inserted"<<value<<"At The Begining";
			         	}
					}
			void DLL :: insertatend(int value){
								Node* newNode = new Node(value);
									newNode->next = NULL;
								 if(!head){
										head = newNode;
									}
								else{
										Node* curr = head;
										while(curr->next){
						      					curr = curr->next;
										}
										curr->next = newNode;
										newNode -> prev = curr;
								}
				}
											
			void DLL :: Display(){
						if(head == 	NULL){
								cout<<"LInked List Is Empty";
								return;
						}
			/*		Node* forward = head;
					Node* backward = NULL;
					cout<<"\nPresent Linked List Forward  ";
						while(forward!= NULL){
								cout<<forward->data<<"  ";
								backward = forward;
									forward= forward -> next;
							}
						cout<<"\nPresent Linked List Is Backward position ";
							while(backward!= NULL){
								cout<<backward->data<<"  ";
								backward= backward -> prev;
							}
				cout<<"\n";*/
					Node* curr = head;
					cout<<"\nPresent Linked List Forward  \n";
							while(curr!= NULL){
							cout<<"["<<curr->data<<"]";
							curr = curr -> next;

				}
		cout<<"\nPresent Linked List Is Backward position\n ";
								curr = head;
							while(curr->next != NULL){
								curr = curr->next;
							}
							while(curr!= NULL){
								cout<<"["<<curr->data<<"]";
								curr= curr->prev;
							}
					cout<<"\n";
		}
		void DLL:: deletebegining(){
							if(!head){
								cout<<"List Is Empty";
								return;
							}
							else{
								Node* temp = head;	
								head = head-> next;
								delete temp;
							if(head!=NULL){
									head->prev = NULL;
								cout<<"Delet Element From The Begining";
							}
						}
					}
			void DLL::deleteatend(){
							if(!head){
								cout<<"List Is Empty";
								return;
							}	
						else if(head->next == NULL){
								delete(head);
								head = NULL;
								cout<<"List Is Empty";
								}
					else{
							Node* curr = head;
								while(curr->next->next){
											curr = curr->next;
							}
						Node* temp = curr->next;
						curr->next = NULL;
						delete(temp);
						cout<<"Delete From The End";
		}
}
		void DLL::		 deleteanyposition(int value){
							if(head == 	NULL){
								cout<<"LInked List Is Empty";
								return;
						}
					Node* temp = head;
						while(temp != NULL){
							if(temp->data == value){
								if(temp == head){
									deletebegining();
										return;
								}
								if(temp->next == NULL){
										 deleteatend();
										return;
								}
					else{
							temp->prev->next = temp->next;
							temp ->next-> prev = temp ->prev;
										delete(temp);
								cout<<"Deleted The Item\n";
								return;
						}
				}
				temp = temp->next;
				}
			cout<<"Item NOt Found In the List";
			}


int main(){
	DLL list;
	while(true){
			int num,item;
				cout<<"\n1.insert At Begining";
				cout<<"\n2.insert At End";
				cout<<"\n3.Display Element";
				cout<<"\n4. Delete Element From Begining";
				cout<<"\n5.Delete Element From End";
				cout<<"\n6. Delet Element At Any position";
				cout<<"\n0.Exit";
			
				cout<<"\nEnter Option = ";
				cin>>num;
			switch(num){
					case 1: 
						cout<<"Enter Inserting Element ";
						cin>>item;
						list.insertatbegining(item);
						break;
					case 2:
							cout<<"Enter Inserting Element ";
							cin>>item;
 							list.insertatend(item);
							break;
					case 3:
							list.Display();
							break;
					case 4:
							list.deletebegining();
							break;			
					case 5:
							list.deleteatend();
							break;
					case 6:
							cout<<"Enter Deleting Element";
							cin>>item;
							list.deleteanyposition(item);
							break;

					case 0:
								exit(0);


					
					}
				}
			}



		
