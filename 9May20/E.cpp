#include <bits/stdc++.h>
using namespace std;
#define T int t;cin>>t;for(;t!=0;t--)
#define lld long long int
int main(){
    lld k,kk,n,j,i;
    T{
        cin>>n;
        if(n<4){cout<<-1<<endl;continue;}
        if(n==4){cout<<2<<" "<<4<<" "<<1<<" "<<3<<endl;continue;}
        for(i=1;i<=n;i++){if(i%2==1)cout<<i<<" ";}
        k=n%2==0; kk= k==0;
        cout<<n-3-k<<" "<<n-kk<<" ";
        if(n%2==0){
            cout<<n-2<<" ";
            if(n-6>0)cout<<n-6<<" ";
            for(i=n-8;i>0;i=i-2)cout<<i<<" ";
        }
        else{
            if(n-5>0)cout<<n-5<<" ";
            for(i=n-7;i>0;i=i-2)cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}

