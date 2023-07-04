#include<iostream>
using namespace std;

class Queue
{
    public:

    int queue[1000];
    int size;
    int front;
    int rear;
    int max_capacity;


    Queue()
    {
        this->front = 0;
        this->rear = -1;
        this->max_capacity=1000;
        this->size=0;
    }

    enqueue(int data)
    {
        if(size==max_capacity)
        {
            cout<<"maximum capacity has been reached"<<endl;
            return;
        }

        rear = (rear+1)%capacity;
        queue[rear]=data;
        size++;

    }

    void dequeue()
    {
        if(size==0)
        {
            cout<<"the size of the queue is 0 and there are no more elements"<<endl;
            return;
        }

        cout<<"the element to be debequed is "<<queue[front];
        front++;
        size--;
    }

    void peekqueue()
    {
        cout<<"the element at the front of thw queue is "<<queue[front];
    }

    void dizeofqueue()
    {
        cout<<"the queue currently has"<<size<<"elemt in it "<<endl;
    }
};

int main()
{

    Queue q;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);
    q.enqueue(1);

    q.dequeue();
    q.dequeue();

    q.peekqueue();

    q.dequeue();

    q.peekqueue();
    
    q.dequeue();

    return 0;
}