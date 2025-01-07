#include<iostream>
using namespace std;

int main(){
	int *p;
	int arr[10];
	int x=10;
	for(int i=0; i<10; i++)
	{
		arr[i] =x;
		x  +=10;
		
	}
	for(int i =0; i<10; i++)
	{
		cout<<"data at the pos"<<arr[i] <<" "<<&arr[i]<<"  "<<arr+i<<endl;
	}


return 0;
	
}