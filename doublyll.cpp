#include<iostream>
using namespace std;

class Node{
public:
	int data;
	Node* next;
	Node* prev;

	Node(int value){
		data=value;
		next=NULL;
		prev=NULL;
	}
};

class Linklist{
	Node *head;
public:
	Linklist(){
		head=NULL;
	}
	void inBeg(int value);
	void display();
	void inEnd(int value);
	void delBeg();
	void delEnd();
	bool search(int value);
	void delValue(int value);
	void revdisplay();
};

void Linklist :: inBeg(int value){
	Node* temp = new Node(value);
	if(!head){
		head = temp;
		return;
	}
	else{
		head->prev=temp;
		temp->next=head;
		head=temp;
	}
}

void Linklist :: inEnd(int value){
	Node* temp = new Node(value);
	if(!head){
		head = temp;
		return;
	}
	Node* current = head;
	while(current->next!=NULL){
		current=current->next;
	}
	current->next=temp;
	temp->prev=current;
	return;
}

void Linklist :: delBeg(){
	if(!head){
		cout<<"The list is empty"<<endl;
		return;
	}
	
	else{
		Node* temp=head;
		head=head->next;
		delete temp;
		head->prev=NULL;
	}
}

void Linklist :: delEnd(){
	if(!head){
		cout<<"The list is empty"<<endl;
		return;
	}
	Node* current = head;
	while(current->next!=NULL){
		current=current->next;
	}
	Node* temp=current->prev;
	temp->next=NULL;
	delete current;
	return;
}


void Linklist :: display(){
	Node* current=head;
	cout<<"The list elements are"<<endl;
	while(current!=NULL){
		cout<<current->data<<"\t";
		current=current->next;
	}
	cout<<endl;
}

bool Linklist :: search(int value){
	Node* current = head;
	while(current!=NULL){
		if(current->data==value){
			return true;
		}
		current=current->next;
	}
	return false;
}

void Linklist :: delValue(int value){
	int del=0;
	if(head==NULL){
		cout<<"The list is empty"<<endl;
		
		return;
	}
	else if(head->data==value){
		head=NULL;
		
		return;
	}
	Node* temp;
	Node* current = head;
	while(current!=NULL){
		if(current->data==value){
			temp = current;
		}
		current=current->next;
	}
	current = temp->prev;
	current->next=temp->next;
	delete temp;
	
}

void Linklist :: revdisplay(){
	Node* current = head;
	while(current->next!=NULL){
		current=current->next;
	}
	cout<<"The reverse list elements are"<<endl;
	while(current!=NULL){
		cout<<current->data<<"\t";
		current=current->prev;
	}
}


int main(void){
	Linklist ll;
	int value,choice;
	cout<<"Select choice"<<endl<<"1.insert Begining"<<endl<<"2.insert at End"<<endl<<"3.display"<<endl<<"4.delete begining"<<endl<<"5.delete end"<<endl<<"6.search"<<endl<<"7. Reverse Display"<<endl<<"8.delete value"<<endl;
	cin>>choice;
	while(choice<=8){
		switch(choice){
			case 1:
				cout<<"Enter the number :";
				cin>>value;
				ll.inBeg(value);
				break;
			case 2:
				cout<<"Enter the number :";
				cin>>value;
				ll.inEnd(value);
				break;
			case 3:
				ll.display();
				break;	
			case 4:
				ll.delBeg();
				cout<<endl;
				break;
			case 5:
				ll.delEnd();
				cout<<endl;
				break;
			case 6:
				cout<<"Enter the number :";
				cin>>value;
				if(ll.search(value)){
					cout<<"Exist"<<endl;}
				else{
					cout<<"Not Exist"<<endl;}
				break;
			case 7:
				ll.revdisplay();
					break;
			case 8:
				cout<<"Enter the number :";
				cin>>value;
				if(!ll.search(value)){
					cout<<"Not Exist"<<endl;}
				else{
					ll.delValue(value);}
				break;
		}
	cin>>choice;
	}
	return 0;
}