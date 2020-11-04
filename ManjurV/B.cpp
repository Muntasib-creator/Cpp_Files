#include<bits/stdc++.h>
#define lld long long int
#define T int tT;cin>>tT;for(;tT!=0;tT--)
using namespace std;
int main(){
    int j=0;
    T{  j++;
        lld k,n,i,mx=0,t,x,px=0,f=0;
        cin>>n;
        for(i=0;i<n;i++){
            cin>>x;
            if(mx<x-px){
                mx=x-px;
                t=mx;
                f=0;
            }
            if(t==x-px){t--;}
            if(t==0&&i<n-1)f=1;
            px=x;
        }
        if(f==1){cout<<"Case "<<j<<": "<<mx+1<<endl;}
        else cout<<"Case "<<j<<": "<<mx<<endl;
    }
    return 0;
}
//6 11 15 18 20 21
//Case 1: 5
