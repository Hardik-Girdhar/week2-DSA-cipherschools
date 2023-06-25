#include <iostream>

using namespace std;

void swap(int *x, int *y)
{
    int c;
    
    c=*x;
    *x=*y;
    *y=c;
    
    cout<<"the swapping is complete"<<endl;
    
}

int main()
{
    int a,b;
    
    a=3;
    b=4;
    
    swap(&a,&b);
    
    cout<<"the values of a and b after swapping are : "<<a<<" "<<b;
    
    return 0;
}