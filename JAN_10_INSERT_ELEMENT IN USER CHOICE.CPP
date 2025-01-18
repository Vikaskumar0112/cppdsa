#include <iostream>
using namespace std;
int arr[100];
int main()
{
    cout<<"Enter the size of array: (max 9) ";
    int n;
    cin>>n;
   
    for(int i =0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Orignal Array: "<<endl;
    for(int i=0; i<n; i++) cout<<arr[i]<<"  ";
   
    int x;
    cout<<"Ennter new data: ";
    cin>>x;
    int pos;
    cout<<"Enter pos: ";
    cin>>pos;
       
    for(int i=n; i>=pos; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos] = x;
    n++;
   

     
     cout<<"Updated Array: "<<endl;
    for(int i=0; i<n; i++) cout<<arr[i]<<"  ";
}