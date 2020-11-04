#include<bits/stdc++.h>
#define lld long long int
#define T int t;cin>>t;for(;t!=0;t--)
using namespace std;
//lld best=9999999999 ;
lld value[100],check[100];
lld solve(lld a[],lld n,lld s){

    if (n==0) return 0;
    if (n<0) return 999999999;
    if(check[n])return value[n];

    lld best=99999999;
    for(int i=0;i<s;i++){
        best=min(solve(a,n-a[i],s)+1,best);
    }
    check[n]=true;
    value[n]=best;
    return best;
}
int main(){
    lld n, a[4]={2,3,4,6},s=4;
while(1){
    cin>>n;
    cout<<"ANS "<<solve(a,n,s)<<endl;
}
return 0;
}
