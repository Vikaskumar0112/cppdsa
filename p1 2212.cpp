#include<iostream>
using namespace std;
#define N 5
int arr[N];
int top=-1;

int pop(){
	int r=-1;
	//step1: Check under flow condition
	if(top==-1){
		cout<<"under flow condition";
		return r;
	}
	else{
	//step2: store top index value into another value
	r=arr[top];
	//step3:  Decrease top by 1
	top--;
	}

	//step4:  Return result
	return r;
}
void push(int data){
	//step1: Check overflow condition
	if(top==N-1){
		cout<<"Over flow ";
	return;
	}
	else{
	//step2: Increment Top By 1
	top++;//0
	//step3:Assign data into top
	arr[top]=data;
	cout<<"\n Data insert success into the top of the stack : "<<data;
	}
	
	
}

int main(){
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	cout<<"\n\n";
	cout<<"\n Delete Top Element of the Stack : "<<pop();
	cout<<"\n Delete Top Element of the Stack : "<<pop();
	cout<<"\n Delete Top Element of the Stack : "<<pop();
	cout<<"\n Delete Top Element of the Stack : "<<pop();
	cout<<"\n Delete Top Element of the Stack : "<<pop();
	
	cout<<"\n Delete Top Element of the Stack : "<<pop();
	
	return 0;
}
