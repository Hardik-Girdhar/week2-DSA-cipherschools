#include<iostream>
using namespace std;

void printHi(){    //no parameters
	cout<<"Hi"<<endl;
	return;
}

int sum(int a, int b){   //formal parameters
	int c;
	
	c = a+b;  //a+b=10
	
	a=500;
	cout<<"the value of c in sum func: "<<c<<endl;
	return c;
}

int main(){
    printHi();	//calling this function first
    int a,b;
    
    a=4;
    b=6;
    
    int c=75;
    
    int d;
    
    d = sum(a,b);   //a,b ->actual parameters
    
    cout<<"The sum is equal to "<<d <<" a is: "<<a<<endl;
    
    cout<<"the value of c in main func: "<<c;
    
    return 0;
}