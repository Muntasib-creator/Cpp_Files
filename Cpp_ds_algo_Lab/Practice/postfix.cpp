 #include<bits/stdc++.h>
#include<string>
using namespace std;

class node{
    public:
        int data;
        node *next;
};
node* top;

int pop(){
    if(top==NULL){
        cout<<"stack is empty"<<endl;
        return -1;
    }
    else{
        int val = top->data;
        top=top->next;
        return val;
    }
}
void push(int d){
    node* temp= new node();
    temp->data = d;
    temp->next = top;
    top = temp;
}
void print(){
    node* temp = top;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl;
}
int main(){
    // cout<<"a";
    push(10);
    print();
    push(20);
    print();
    cout<<pop();
    print();

    string ex;
    getline(cin, ex);
    cout<<ex;
}
