#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

void PrintList(Node* n)
{
    while(n != NULL)
    {
       cout<<n->data<<" ";
       n = n->next;
    }
}

int main()
{
    int a[10] = {1,2,3,4};
    //cout<<a[2]<<endl;

	Node* head = new Node();
	Node* second = new Node();
	Node* third = new Node();

	head->data = 10;
	head->next = second;

	second->data = 20;
	second->next = third;

	third->data = 30;
	third->next = NULL;

    PrintList(head);
    cout<<endl;

    //insertion
    // insert at first location
    // insert at middle location
    // insert at last location

    Node* new_node = new Node();
    new_node->data = 5;

    //insert the new_node at first
    new_node->next = head;
    head = new_node;

    PrintList(head);

    //insert at specific location
    // insert value 15 after 10
//    new_node
//
//    while ()
//    {
//        present_node
//        if(present_node->data == 10)
//        {
//            new_node -> next = present_node -> next;
//            present_node -> next = new_node;
//        }
//    }

    PrintList(head);
    // 5 10 15 20 30

    //insert at last value 60
    //

    PrintList(head);
    //5 10 15 20 30 60

	return 0;
}
