//Applications of Stack
//The simplest application of a stack is to reverse a word.
//You push a given word to stack - letter by letter - and then pop letters from the stack.
//Parsing
//Expression Conversion(Infix to Postfix, Postfix to Prefix etc)

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
};

Node* top;

void push(int d)
{
    Node* temp = new Node();
    temp->data = d;
    temp->next = top;
    top = temp;
}

void pop()
{
    if(top == NULL)
    {
        cout<<"underflow"<<endl;
    }
    else
    {
        Node* temp = top;
        top = top->next;
    }
}

void display()
{
    Node* temp = top;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void top_element()
{
    cout<<top->data<<endl;
}

int main()
{
    push(10);
    push(20);

    top_element();
    //20
    display();
    //10 20

    pop();

    push(30);
    top_element();
    //30
    display();
    //10 30

	return 0;
}
