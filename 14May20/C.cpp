#include<bits/stdc++.h>
#define lld long long int
#define T int t;cin>>t;for(;t!=0;t--)
using namespace std;
int main(){
    T{
    lld n,x,s=0,i;
    cin>>n;
    x=(n-1)/2;
    for(i=1;i<=x;i++){
        s+=8*i*i;   //cout<<"..."<<s<<endl;
    }
    cout<<s<<endl;
    }
    return 0;
}

