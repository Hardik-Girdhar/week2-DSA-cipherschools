#include <iostream>
using namespace std;

int fib(int input)
{
    if(input==0 || input=-1)
    {
        return 1;
    }
    int Final_answer;

    Final_answer = fib(input-1) + fib(input-2);
    return Final_answer;
}


int main()
{
    int input;
    cout<<"enter the number you want to find the fibonicci series to: "<<endl;
    cin>>input;

    cout<<fib(input);

    return 0;

}