#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};

Node *head =NULL;
void insert(int x){
	Node *newNode = new Node;
	newNode->data=x;
	newNode->next=head;
	head = newNode;
}
void show()
{
	Node *temp =head;
	cout<<"\n Element of linked list\n";
	while(temp!=0)
	{
		cout<<temp->data<<"  ";
		temp = temp->next;
	}
	cout<<"\n end of linked list"<<endl;
}
int main(){
	insert(11);
	insert(22);
	insert(33);
	insert(44);
	insert(55);
	insert(66);
	show();
	insert(77);
	show();

}