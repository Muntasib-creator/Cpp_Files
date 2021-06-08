#include<bits/stdc++.h>
using namespace std;
int n;
struct node{
    int value;
    node *link;
};
node *head;
void creation(int x){
    node *ptr= new node();
    ptr->value = x;
    ptr->link = NULL;
    if(head== NULL)
        head = ptr;
    else{
        node *tmp= head;
        while(1){
            if(tmp->link== NULL){
                tmp->link = ptr;
                break;
            }
            else
                tmp= tmp->link;
        }
    }
}
void traverse(){
    node *tmp=head;
    cout<<"Elements Are: ";
    while(1){
        cout<<tmp->value<<" ";
        tmp= tmp->link;
        if(tmp== NULL){
            cout<<"\n";
            break;
        }
    }
}
void First_delete(){
    head=head->link;
    traverse();
}
void last_delete(){
    node *tmp,*srt;
    for(tmp=head; ;){
        if(tmp->link==NULL){
            srt->link=NULL;
            break;
        }
        else{
            srt=tmp;
            tmp=tmp->link;
        }

    }
    traverse();
}
void delete_given(){
    cout<<"Enter Element to Delete: ";
    int item;
    cin>>item;
    node * tmp,*srt;
    for(tmp=head; ;){
        if(tmp->value==item){
            if(tmp==head){
                First_delete();
                break;
            }
            else if(tmp->link== NULL){
                last_delete();
                break;
            }
            else{
                srt->link = tmp->link;
                traverse();
                break;
            }
        }
        else if(tmp->link == NULL){
            cout<<"Item not Found!!!\n";
            break;
        }
        else{
            srt = tmp;
            tmp = tmp->link;
        }

    }
}
void after_delete(){
    cout<<"Enter Element to Delete: ";
    int item;
    cin>>item;
    node * tmp, *srt;
    for(tmp= head;;){
        if(tmp->value== item){
            srt=tmp->link;
            if(srt->link == NULL){
                last_delete();
                break;
            }
            else if(tmp->link== NULL)
                break;
            else{
                tmp->link = srt->link;
                traverse();
                break;
            }
        }
        else if(tmp->link == NULL){
            cout<<"Item not Found!!!\n";
            break;
        }
        else
            tmp = tmp->link;
    }
}
void before_delete(){
    cout<<"Enter Element to Delete: ";
    int item;
    cin>>item;
    node * tmp, *srt;
    if (head->value == item){
        cout<<"Can't delete previous of 1st node"<<endl;
        traverse();
        return;
    }
    if(head->link->value == item){
        First_delete();
        return;
    }
    srt = head;
    tmp = head->link;
    for(;;){
        if(tmp->link == NULL){
            cout<<"Item not Found!!!\n";
            traverse();
            return;
        }
        else if(tmp->link->value==item){
            srt->link = tmp->link;
            traverse();
            return;
        }
        tmp = tmp->link;
        srt = srt->link;
    }
}
int main(){
    cout<<"Enter Size: ";
    cin>>n;
    cout<<"Enter LinkedList: ";
    int x;
    for(int i=0; i<n; i++){
        cin>>x;
        creation(x);
    }
    traverse();
    int a;
    while(1){
        cout<<"Enter Choice: ";
        cin>>a;
        if(a==1)
            First_delete();
        else if(a==2)
            last_delete();
        else if(a==3)
            delete_given();
        else if(a==4)
            after_delete();
        else if (a==5)
            before_delete();
        else
            break;
    }
}
