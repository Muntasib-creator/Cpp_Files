#include <bits/stdc++.h>
using namespace std;

void swapp(int arr[],int i,int j){
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
int main(){
    cout<<"Array length:";
    int n;
    cin>> n;
    int arr[n];
    cout<<"Enter the array: ";
    for(int i=0;i<n;i++)
        cin>> arr[i];
//    int arr[5] = {5,4,3,2,1};
//    for(int i=0;i<n;i++)
//        cout<<arr[i]<<" "; cout<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                swapp(arr,j,j+1);
            }
        }
    }
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" "; cout<<endl;
}
