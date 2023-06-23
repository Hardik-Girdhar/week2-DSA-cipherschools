#include<iostream>
using namespace std;

int sum(int a,int b){
	return a+b;
}

int main(){
	int a,b;
	a=1,b=5;
	int c;
	c = sum(a,b);
	cout<<c;
	return 0;
}