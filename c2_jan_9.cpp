#include <iostream>
using namespace std;

int main()
{
	int arr[] = {32,4,45,567,5,5,67,765,8,6,9,70,987,7,35,46,234,5,23,423,45,432,5234,45};
	int s = sizeof(arr)/4;
	int t;
	
	cout<<"Before Sort: "<<endl;
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