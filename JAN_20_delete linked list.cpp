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
void delNode()
{
    if(head == NULL)
    {
        cout<<"Linked List is Already Empty"<<endl;
        return;
    }
    Node *temp = head;
    head = temp->next;
    delete temp;
}
void delNodeAE()
{
    if(head == NULL)
    {
        cout<<"Linked List is Already Empty"<<endl;
        return;
    }
    if(head->next == NULL)
    {
        head = head->next;
        delete head;
    }
    Node *temp = head;
    while(temp->next->next != NULL)
    {
        temp = temp->next;
    }
   
    delete temp->next;
    temp->next = NULL;
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



int main()
{
    insert(11);
    insert(22);
    insert(33);
    insert(44);
    show();
    delNode();
    show();
    insert(55);
    show();
    delNode();
    show();
    delNodeAE();
    show();
    delNodeAE();
    show();
   
     
}