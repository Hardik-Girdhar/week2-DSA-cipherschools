#include<iostream>
using namespace std;
int main(){
	int a=4;
	float b;
	int *p=&a;
	cout<<"The address of a: "<<&a<<endl;
	cout<<"The address of b: "<<&b<<endl;
	cout<<"The value of a: "<<*p;
}