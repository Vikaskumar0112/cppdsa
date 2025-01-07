//doubly linked list
#include<iostream>
using namespace std;
class Node{
	public:
		Node *prev;
		int data;
		Node *next;
		
	Node(int data)
	prev=Null;
	this->data=data;
	next=NULL;
	cout<<"\n node created";
}

};
void printForward(Node *head){

if(head==NULL){
	cout<<"\n list is empty";
}
else if(head->next==NULL){
	cout<<"\n list data \n";
	cout<<"<==="
}


















   cout<<"\n list data in backward direction"



int main(){
	Node *f1=new Node(10);
	Node *f2=new Node(20);
	Node *f3=new Node(30);
	Node *f4=new Node(40);
	
	f1->next=f2;
	f2->next=f1;
	
	f2->next=f3;
	f3->next=f2;
	
	f3->next=f4;
	f4->prev=f3;
	
	printForward(head);
	printBackward(tail);
	
	
	
	
	return 0;
	
	
	
}