#include<iostream>
using namespace std;

class Queue
{
    public:

    int queue[1000];
    int capacity;
    int front;
    int rear;


    Queue()
    {
        this->front = 0;
        this->rear = -1;
        this->capacity=1000;
    }
}

int main()
{
    return 0;
}