#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp=0,maxx=0;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1){ cout<< arr[0] ; return 0;}


    sort(arr,arr+n);
    printf("sorted arr:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }printf("\n");


    int c=1;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]){c++;}
        else{
            temp=arr[i-1]*c;
            c=1;
            if(temp>=maxx){maxx=temp;}
        }
    }
    cout<<maxx<<endl;
    return 0;
}
