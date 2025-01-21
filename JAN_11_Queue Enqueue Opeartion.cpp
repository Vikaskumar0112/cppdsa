#include <iostream>
using namespace std;
#define n 5

int queue[n];
int f = -1;
int r = -1;

void enqueue(int x)
{
    if(r== n-1)
    {
        cout<<"Queue is already full"<<endl;
        return;
    }
    if(f== -1)
    {
        f=0;
    }
    r++;
    queue[r] = x;
    cout<<"You add new element in queue "<<x<<endl;
}


int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);
    enqueue(7);
     
}