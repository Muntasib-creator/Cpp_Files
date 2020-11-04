#include<bits/stdc++.h>
#define lld long long int
#define T int t;cin>>t;for(;t!=0;t--)
using namespace std;
int main(){
    T{
        lld a,b,mn,mx,area;
        cin>>a>>b;
        mn=min(a,b);
        mx=max(a,b);
        if(mx>mn*2){
            cout<<mx*mx<<endl;
        }
        else{
            cout<<4*mn*mn<<endl;
        }
    }
    return 0;
}
