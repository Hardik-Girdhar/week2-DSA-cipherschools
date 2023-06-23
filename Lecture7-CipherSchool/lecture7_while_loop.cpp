#include<iostream>
using namespace std;

int main(){
	int password;
	
	cout<<"Enter the password:"<<endl;
	cin>>password;
	
	while(password<999999){
		cout<<"The password does not meet the required conditions, please enter the password again";
		cin>>password;
	}
	cout<<"The user entered the correct password"<<endl;
	return 0;
}