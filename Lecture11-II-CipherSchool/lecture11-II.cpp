#include<iostream>
using namespace std;

int main(){
	int a;
	long long int b;
	float c;
	
	cout<<"The size of int is: "<<sizeof(a)<<endl;   //bytes
	cout<<"The size of long long int is: "<<sizeof(b)<<endl; 
	cout<<"The size of float is: "<<sizeof(c)<<endl; 
	
	cout<<"The address of a is "<<&a<<"  The address of b is "<<&b;
	
	return 0;
}