//node creation for singly linked list
#include<iostream>
using namespace std;
class Node{
	public:
	int data;//10
	Node *next;
	
	Node(int data){
		this->data=data;
		next=NULL;
		cout<<"\n node created";
		
	}
	
};

Node * addAtLast(Node *head, int data){
	Node *newNode=new Node(data);
	if(head==NULL){
		head=newNode;
	}else{
		Node *temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newNode;
	}
	cout<<"\n node added success at the end of singly linked list \n";
	return head;
}

void display(Node *head){
	Node *temp=head;
	while(temp!=NULL){
		cout<<"===>"<<temp->data;//==>10 ===>20 ====>30====>40
		temp=temp->next;
	}
}
Node *addNodeAtStart(Node *head,int data){
	Node *newNode=new Node(data);//5
	if(head==NULL){
		head=newNode;
	}else{
		newNode->next=head;
		head=newNode;
	}
	return head;
}

int main(){
	Node *first=new Node(10);
	Node *second=new Node(20);
	Node *third=new Node(30);
	Node *forth=new Node(40);
	Node *head=first;
	//connect first node to second note
	head->next=second;
	//connect second node to third note
	head->next->next=third;
	//connect third node to forth node
	head->next->next->next=forth;
	cout<<"\n singly linked list data";
	display(head);
	head=addAtLast(head,50);
	cout<<"\n print data singly linked list after add new node at the end of list ";
	display(head);
	head=addNodeAtStart(head,5);
	cout<<"\n print data singly linked list after add new node at the start of list ";
	display(head);
	
	return 0;
}