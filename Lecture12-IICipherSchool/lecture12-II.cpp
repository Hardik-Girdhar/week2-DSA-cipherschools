#include<iostream>
using namespace std;
int main(){
	int a;
	int b;
	
	int c;
	
	int *p;
	int *q;
	p=&a;
	q=&b;
	
	a=1;
	b=5;
	
	*p=3;
	
	c=*p+*q;
	cout<<"The value of a(from the actual variable type): "<<a<<endl;
	cout<<"The value of a(from the pointer using *): "<<*p<<endl;
	cout<<"the value of c: "<<c<<endl;
	cout<<"The address of is: "<<&a<<" The value of pointer is: "<<p;
	return 0;
}