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

int main(){
	Node *first=new Node(10);
	Node *second=new Node(20);
	Node *third=new Node(30);
	Node *head=first;
	//connect first node to second note
	head->next=second;
	//connect second node to third note
	head->next->next=third;
	cout<<"\n singly linked list data";
	cout<<head->data<<"===>"<<head->next->data<<"====>"<<head->next->next->data;
	
	return 0;
}