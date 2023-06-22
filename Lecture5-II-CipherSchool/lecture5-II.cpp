#include <iostream>
using namespace std;
int main(){
 int a[5]; //initialising array
 cout<<"Enter 5 integers in the array"<<endl;
 for(int i=0; i<5; i++){
  
   cin>>a[i];
}
 cout<<"Now printing the all entered elements"<<endl;
 for(int i=0; i<5; i++){
  
   cout<<a[i];
}
 cout<<"printing in reverse order"<<endl;
 for(int i=4; i>=0; i--){
  
   cout<<a[i];
}
return 0;
}