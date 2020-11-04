#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,j,x,t,n,k,q,a[100000];
    cin>>n>>k>>q;
    for(i=0;i<n;i++){
        a[i]=k-q;
    }
    for(i=0;i<q;i++){
        cin>>x;
        a[x-1]++;
    }
    for(i=0;i<n;i++){
        if(a[i]>0){cout<<"Yes"<<endl;}
        else{cout<<"No"<<endl;}
    }
    return 0;
}

