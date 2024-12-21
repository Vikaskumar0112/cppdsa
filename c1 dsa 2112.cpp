//stack implementan using arrray 
#include<iostream>
using namespace std;
#define N 5
int arr[N];
int top=-1;

void push(int data){
	// step 1 check over flow condition
	if(top==N-1){
		cout<<" \n over flow ";
		return;
	}
	else{
		//step2: increment top by 1
		top++;
		//step3: assign data into top
		arr[top]=data;
		cout<<" \n data insert succes into the top of the stack : "<<data;
	}
	
}
int main(){
	
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	push(60);
}

