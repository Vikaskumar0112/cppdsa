#include <iostream>
using namespace std;
struct Node {
    int data;
    Node *next;
};
Node *head  = NULL;

void insert(int x)
{
    Node *newNode = new Node;
    newNode->data = x;
    newNode->next = head;
    head = newNode;
}

void insertAE(int x)
{
    Node *newNode = new Node;
    newNode->data = x;
    newNode->next = NULL;
   
    Node *temp = head;
   
    while(temp->next != NULL)
    {
        temp = temp->next ;
    }
   
    temp->next = newNode;
}

void insertAtPos(int pos, int x)
{
    Node *newNode = new Node;
    newNode->data = x;
   
    if(pos == 1)
    {
    	newNode->next = head;
    	head = newNode;
        return;
    }
    Node *temp = head;
   
    for(int i=1; i<pos-1 && temp != NULL; i++)
    {
        temp = temp->next ;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void show()
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next ;
    }
    cout<<endl<<endl;
}

int main(){
	int i=1;
	int x,pos;
	while(i){
		cout<<"enter 1 for insert data at first position in linked list"<<endl;
		cout<<"enter 2 for insert data at last position in linked list"<<endl;
		cout<<"enter 3 for insert data at user choice position in linked list"<<endl;
		cout<<"enter 4 for display data in linked list"<<endl;
		cout<<"enter 0 for exit"<<endl;
		
		cin>>i;
		if(i==1)
		{
		cout<<"enter the value of data"<<endl;
		cin>>x;
		insert(x);
		}else if(i==2)
		{
		cout<<"enter the value of data"<<endl;
		cin>>x;
		insertAE(x);
		}else if(i==3)
		{
		cout<<"enter the value of data"<<endl;
		cin>>(x);
		cout<<"enter the position of insert data"<<endl;
		cin>>pos;
		insertAtPos(pos,x);	
		}else if(i==4)
		{
			cout<<" data in liked list : "<<endl;
			show();	
		}
		else if(i==0)
		{
			cout<<"exit ...."<<endl;
			break;
		}
		else
		{
		cout<<"please enter a valid number\n"<<endl;	
		}	
	}
	return 0;
	
}