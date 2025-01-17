#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

Node *head = NULL;
void insert(int x)
{
    Node *newNode = new Node;
    newNode->data = x;
    newNode->next = head;
    head = newNode;    
}
void insertAE(int x)
{
	Node *newNode=new Node;
	newNode->data=x;
	newNode->next=NULL;
	
	Node *temp=head;
	
	while(temp->next !=NULL)
	{
		temp=temp->next;
	}
	temp->next=newNode;
}
void show()
{
    Node *temp = head;
    cout<<"\nElements of Linked List\n";
    while(temp != NULL)
    {
        cout<<temp->data<<"  ";
        temp = temp->next;
    }
    cout<<"\nendl of Linked List"<<endl;
   
   
}



int main()
{
    insert(11);
    insert(22);
    insert(33);
    show();
    insert(44);
    insertAE(100);
    insert(55);
    insert(66);
    show();
   
     
}