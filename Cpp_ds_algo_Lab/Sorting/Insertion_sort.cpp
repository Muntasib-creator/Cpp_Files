#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" "; cout<<endl;
}
void swap(int arr[], int x, int y){
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}
int main(){
    int n = 5;
    int arr[n] = {5,4,3,2,1};
    for(int i=1; i<n; i++){
        int temp = arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(temp<arr[j]){        //cout<<"j="<<j<<endl;
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
        print(arr, n);
    }


}