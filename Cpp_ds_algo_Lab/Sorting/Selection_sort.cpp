#include<bits/stdc++.h>
using namespace std;

void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void print(int arr[], int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" "; cout<<endl;
}
int main(){
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n;
    for(int i=0;i<n-1;i++){
        int mn = i;
        for(int j=i;j<n;j++){
            if(arr[mn]>arr[j]) 
                mn=j;
        }
        swap(arr,mn,i);
    }
    print(arr,n);
}