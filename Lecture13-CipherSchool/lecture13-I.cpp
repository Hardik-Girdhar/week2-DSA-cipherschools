#include<iostream>
using namespace std;
int main(){
	int a=5;
	
	int *x;
	x=&a;
	
	cout<<"The address of a, which is stored in the pointer x is: "<<x<<endl;
	cout<<"The value of x+1 is: "<<x+1<<endl;
	cout<<"The value of x+1 is: "<<x+2;
	
	for(int i=0;i<6;i++){
		cout<<&x[i]<<endl;
	}
	return 0;
}