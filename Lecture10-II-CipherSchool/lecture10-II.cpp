#include<iostream>
using namespace std;

//void swap(int a, int b){
////	a=a+b;
////	b=a-b;
////	a=a-b;
//    int c;
//	c=a;
//	a=b;
//	b=c;	
//	cout<<"After swap: "<<a<<" "<<b;
//}
void swap(int &a, int &b){   //we can change actual parameters, this method is called passing by reference
	int c;
	c=a;
	a=b;
	b=c;	
	cout<<"After swap: "<<a<<" "<<b<<endl;
}

void func(int &a, int b){
	a=9999;
	b=9999;
	cout<<"values of a & b in func: "<<a<<" "<<b<<endl;
}

int main(){
	int a,b;
	a=4;
	b=6;
	
	cout<<"Before swap: "<<a<<" "<<b<<endl;
	swap(a,b);
	cout<<"after swap in main func: "<<a<<" "<<b<<endl;
	
	
	func(a,b);
	cout<<"values of a & b in main: "<<a<<" "<<b<<endl; //a is changed to 9999, b doesn't change
	return 0;
}