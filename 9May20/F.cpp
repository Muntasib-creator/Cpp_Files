#include <bits/stdc++.h>
using namespace std;
#define T int t;cin>>t;for(;t!=0;t--)
#define lld long long int
int main(){
    lld n0,n1,n2,k,i;
    T{
        cin>>n0>>n1>>n2;
        if(n1==0&&n2==0){
            cout<<0;
            for(;n0!=0;n0--)cout<<0;
        }
        else{
            for(i=0;i<n2;i++){cout<<1;}
            cout<<1;
            for(i=0;i<n1;i++){
                if(i%2==0)cout<<0;
                if(i==0){
                    for(;n0!=0;n0--)cout<<0;
                }
                else if(i%2==1)cout<<1;
            }
        }
        cout<<endl;
    }
    return 0;
}

