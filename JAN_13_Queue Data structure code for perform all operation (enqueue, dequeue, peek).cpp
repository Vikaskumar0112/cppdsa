#include <iostream>
using namespace std;
#define n 5

int arr[n], f=-1, r= -1;
void show()
{
    cout<<"\nElements of Queue: \n";
    for(int i=f; i<=r; i++) cout<<arr[i]<<" ";
    cout<<"\nEnd of Queue"<<endl;
}
void insert(int x)
{
    if(r==(n-1))
    {
        cout<<"Queue is already Full/OverFlow"<<endl;
        return;
    }
    if(f== -1)
    {
        f=0;
    }
    r++;
    arr[r] = x;
    cout<<"Your Insert new element in Queue "<<x<<endl;
}

void Mydelete()
{
    if(f == -1)
    {
        cout<<"Queue id already Empty"<<endl;
        return;
    }
    //arr[f] = -1;
   
    cout<<"Deleted Element from Queue: "<<arr[f]<<endl;;
    f++;
    if(f>r)
    {
        f = -1;
        r= -1;
    }
}
int peek()
{
    return arr[f];
}
int main()
{
    insert(11);
    insert(22);
    insert(33);
    show();
    insert(44);
    insert(55);
    show();
    insert(66);
    insert(77);
    show();
    Mydelete();
    Mydelete();
    show();
    insert(66);
    Mydelete();
    Mydelete();
    Mydelete();
    show();
    insert(88);
    insert(99);
    Mydelete();
    show();
    cout<<"Element on Front pointer: "<<peek()<<endl;
   
   
     
}