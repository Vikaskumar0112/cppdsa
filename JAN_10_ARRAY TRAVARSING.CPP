#include <iostream>
using namespace std;
    int arr[100];
    void dispArr(int arr[], int n)
    {
        cout<<"Array Data: ";
        for(int i=0; i<n; i++) cout<<arr[i]<< "  ";
        cout<<endl;
    }

int main()
{
    cout<<"Enter the size of array: (max 9) ";
    int n;
    cin>>n;
   
    for(int i =0; i<n; i++)
    {
        cin>>arr[i];
    }
   
    dispArr(arr, n);
    dispArr(arr, n);
    dispArr(arr, n);
    dispArr(arr, n);
   
   

}