//Applications of Queue

//Serving requests on a single shared resource, like a printer, CPU task scheduling etc.
//In real life scenario, Call Center phone systems uses Queues to hold people
//calling them in an order, until a service representative is free.

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
};

Node *front;
Node *rear;

void enQueue(int d)
{
    Node* temp = new Node();
    temp->data = d;
    temp->next = NULL;

    if(front == NULL)
    {
        front = rear = temp;
    }
    else
    {
        rear->next = temp;
        rear = temp;
    }
}

void deQueue()
{
    if (front == NULL)
    {
        cout<<"underflow"<<endl;
    }
    else
    {
        front = front->next;

        if(front == NULL)
        {
            rear = NULL;
        }
    }
}

int main()
{
	enQueue(10);
	enQueue(20);

	deQueue();
	deQueue();

	enQueue(30);
	enQueue(40);
	enQueue(50);
	deQueue();

    enQueue(60);

	cout << "Queue Front : " << front->data << endl;
	cout << "Queue Rear : " << rear->data;
}
