#include<iostream>
using namespace std;

class Stack
{
    public:

    int *arr;
    int size;
    int top;

    Stack(int size)
    {
        this->size = size;
        arr= new int[size];
        top=-1;
    }

    void push(int element)
    {
        if(size -top>1)
        {
            top++;
            arr[top]=element;
        }
        else
        {
            cout<<"the stack is already full"<<endl;
        }
    }

    void pop()
    {
        if(top>=0)
        {
            top--;
        }
        else
        {
            cout<<"the stack is currently empty and their are no elements to pop"<<endl;
        }
    }

    void peek()
    {
        if(top<0)
        {
            cout<<"there are no elements in the stack to peek"<<endl;
        }
        else
        {
            cout<<"the element at the top of the stack is "<<arr[top];
            // return arr[top];
        }
    }

    bool isEmpty()
    {
        if(top<0) 
        {
            cout<<"the stack is currently empty"<<endl;
            return true;
        }
        return false;
    }

};

int main()
{
    Stack new_stack(5);

    new_stack.peek();
    new_stack.push(5);
    new_stack.peek();
    new_stack.push(4);
    new_stack.peek();
    new_stack.push(3);
    new_stack.push(2);
    new_stack.push(1);
    new_stack.push(100);
    
    new_stack.pop();
    new_stack.peek();
    new_stack.pop();
    new_stack.pop();
    new_stack.pop();
    new_stack.peek();

    return 0;
}