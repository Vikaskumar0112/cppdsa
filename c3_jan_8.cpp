#include <iostream>
using namespace std;

int main()
{
	int a = 45;
	
	int *p = &a;
	
	int **q = &p;
	
	int ***r = &q;
	
	cout<<p<<"  "<<q<<endl;
	cout<<p<<"  "<<q<<"  "<<**r<<endl;
 	
}