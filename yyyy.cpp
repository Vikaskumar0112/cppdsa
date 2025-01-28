#include <iostream>
using namespace std;

int main()
{
int arr[] = {32,4,5 , 60};
	int s = sizeof(arr)/4;
	int t;
	
	cout<<"Before  Sort : "<<endl;
	for(int i=0; i<s; i++) cout<<arr[i]<<" ";
	cout<<endl;
	
	for(int i=0; i<s; i++)
	{
		for(int j=i+1; j<s; j++)
		{
			if(arr[i] > arr[j])
			{
				t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
			}
		}
	}
	cout<<"After Sort: "<<endl;
	for(int i=0; i<s; i++) cout<<arr[i]<<" ";
	cout<<endl;
 	
}