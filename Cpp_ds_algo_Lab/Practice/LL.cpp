#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node *link;
};
node* head = new node();

void print(node *temp){
    while (temp != NULL){
        cout<< temp->data<< " ";
        temp = temp->link;
        
    }    
    cout<<endl;
}

void delete_last_node(node *temp){
    if(temp == NULL) cout<<"No items"<<endl;
    else if (temp->link == NULL) 
        temp = NULL;
        // delete temp;
    else{
        while(temp->link->link != NULL) temp = temp->link;
        temp->link = NULL;
    }
}
int main(){
    int arr[] = {10,20,30,35,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    head->data = arr[0];
    head->link = NULL;
    node *prev = head;
    for(int i=1;i<n;i++){
        node *temp = new node();
        temp->data= arr[i];
        temp->link = NULL;
        prev->link = temp;
        prev = temp;
    }
    print(head);
    delete_last_node(head);
    print(head);
}