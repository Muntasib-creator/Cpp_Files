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
void partition(int arr[], int l, int h){
    int low = l;
    int high = h;
    
    int pivot = arr[l];
    while(true){
        while(arr[l]<=pivot) l++;
        while(arr[h]>pivot) h--;
        if(h<l) break;
        swap(arr,l,h);
    }
    swap(arr,low,h);
    if(low<h-1) partition(arr,low,h-1);
    if(h+1<high) partition(arr,h+1,high);
    
}
// void quick_sort(int arr[], int l, int h){
//     if(l<h){
//         int p = partition(arr,l,h)

//     }
// }
int main(){
    int arr1[] = {3,4,5,2,1};
    int arr[] = {1,2,3,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    print(arr,n);
    // quick_sort(arr,0,n-1);
    partition(arr,0,n-1);
    print(arr,n);

}