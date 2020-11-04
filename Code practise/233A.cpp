#include<bits/stdc++.h>
#define lld long long int
#define T int t;cin>>t;for(;t!=0;t--)
using namespace std;
int main(){
    lld i,n;
    cin>>n;
    if(n%2==1){cout<<-1<<endl;return 0;}
    for(i=1;i<=n;i++){
        if(i%2==0)cout<<i-1<<" ";
        else cout<<i+1<<" ";
    }
    cout<<endl;
    return 0;
}

