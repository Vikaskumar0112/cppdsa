#include <iostream>
using namespace std;

int main()
{
    int n,pos,mid;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
   
    cout<<"enter pos: ";
    cin>>pos;
    mid = (pos+n)/2;
    for(int i = pos, j=1; i<mid; i++,j++)
    {
        int t = arr[i];
        arr[i] = arr[n-j];
        arr[n-j] = t;

    }
   
    cout<<"\n new array"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}