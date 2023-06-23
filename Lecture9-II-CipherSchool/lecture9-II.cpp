#include<iostream>
using namespace std;

int sum(int a, int b); //i have only declared the function but body isn't defined, which is known as prototype

int main(){
	int a,b;
	
	a=3;
	b=5;
	
	int c;
	cout<<a<<" "<<b<<endl;  //before i call the function
	c = sum(3,3);   //function call with parameters 3 & 3
	
	cout<<c<<endl;
	cout<<a<<" "<<b<<endl;   //after i call the funcion
	return 0;
}

int sum(int a, int b){   //function definition
	a=10;
	b=11;
	return a+b;  //10+11
}