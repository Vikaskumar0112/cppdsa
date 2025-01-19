#include <iostream>
using namespace std;

int main()
{
     int arr[]= {31,2,34,23,4,345,5,54,6,56,7,567,8,65,78};
     int s = sizeof(arr)/4;
     
     int key;
     cout<<"Enter key for search: ";
     cin>>key;
     bool abc = true;
     
     for(int i=0; i<s; i++)
     {
         if(arr[i] == key)
         {
             abc  = false;
             cout<<"Element found at the pos "<<i+1<<endl;
             break;
             
        }    
    }
   
    if(abc)
    {
        cout<<"Element not found";
    }
   
}