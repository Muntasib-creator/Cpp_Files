#include<bits/stdc++.h>
#define lld long long int
#define T int t;cin>>t;for(;t!=0;t--)
using namespace std;

int arr[100],n,k;
void traverse(){
    cout<<endl<<"The array is {";
    for(int i = 0; i < n; i++){
        cout<<arr[i];
        if (i == n-1) cout<<"}"<<endl;
        else cout<<", ";
    }
}
void insert(){
    int l,v;
    cout<<endl<<"Enter the index of the new value: ";
    cin>>l;
    if(l<0 || l>= n) {
        cout<<"Invalid index"<<endl;
        return;
    }
    cout<<"Enter the value: ";
    cin>>v;
    for(int i = n-1; i >= l; i--){
        arr[i+1] = arr[i];
    }
    arr[l] = v;
    n++;
}
void _delete(){
    int l;
    cout<<endl<<"Enter the index of the value to be deleted: ";
    cin>>l;
    if(l<0 || l>= n) {
        cout<<"Invalid index"<<endl;
        return;
    }
    for(int i = l; i < n-1; i++){
        arr[i] = arr[i+1];
    }
    n--;
}
int main(){
    cout<<"Enter the length of the array"<<endl;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
        // cout<<n<<" "<<i<<" "<<arr[i];
    }
    while (true){
        cout<<endl<<"Press 1 to traverse the array"<<endl;
        cout<<"Press 2 to insert a value in the array"<<endl;
        cout<<"Press 3 to delete a value in the array"<<endl;
        cout<<"Press 0 to end the program"<<endl;
        cin>>k;
        if (k == 1) traverse();
        else if (k == 2) insert();
        else if (k == 3) _delete();
        else if (k == 0) break;
        else cout<<"Invalid option"<<endl;
    }
    cout<<"Program ended"<<endl;
    return 0;
}
