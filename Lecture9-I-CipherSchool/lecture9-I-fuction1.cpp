#include<iostream>
using namespace std;

int compare(int a, int b){
	if(a == 5){
		return 1;
	}
	return 0;
}

int main(){
	int a,b;
	a=1,b=5;
	cout<<compare(a,b);
	return 0;
}