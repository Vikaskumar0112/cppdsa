//Pointer Example
#include<iostream>
using namespace std;
int main(){
	int a,b;

	int *p1;
	int *p2;//Declare a pointer variable
	p1=&a;
	p2=&b;
	cout<<"\n Address of a : "<<&a;
	cout<<"\n Address of b : "<<&b;
	cout<<"\n Address of p1 : "<<p1;
	cout<<"\n Address of p2 : "<<p2;
	cout<<"\n Address of &p1 : "<<&p1;
	cout<<"\n Address of &p2 : "<<&p2;
	
	cout<<"\n value of a using pointer  : "<<*p1;
	cout<<"\n value of b using pointer  : "<<*p2;
	*p1=11;
	*p2=22;
	cout<<"\n value of a   : "<<a;
	cout<<"\n value of b  : "<<b;
	cout<<"\n value of a using pointer  : "<<*p1;
	cout<<"\n value of b using pointer  : "<<*p2;
	
	return 0;
}

