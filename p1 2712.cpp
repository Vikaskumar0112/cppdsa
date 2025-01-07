//Node creation for Singly Linked List
#include<iostream>
using namespace std;
class Node{
	public:
		int data;//10
		Node  *next;
	
	Node(int data){
		this->data=data;
		next=NULL;
		cout<<"\n Node created ";
	}
};


int main(){
	Node *first=new Node(10);
	Node *second=new Node(20);
	Node *third=new Node(30);
	Node *forth=new Node(45);
	Node  *head=first;
	//connect first Node to Second Node
	head->next=second;
	//connect second Node to third Node
	head->next->next=third;
	head->next->next->next=forth;
	cout<<"\n Singly Linked List Data ";
	cout<<head->data<<"===>"<<head->next->data<<"===>"<<head->next->next->data<<"===>"<<head->next->next->next->data;
	return 0;
}
