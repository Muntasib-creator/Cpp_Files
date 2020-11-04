#include<bits/stdc++.h>
#define lld long long int
#define T int t;cin>>t;for(;t!=0;t--)
using namespace std;
//lld best=9999999999 ;
lld value[100],check[100];
lld solve(lld p[],lld l[],lld n,lld s){

    if (n==0) return 0;
    if (n<0) return -100000000;
    if(check[n])return value[n];

    lld best=-10000000;
    for(int i=0;i<s;i++){
        best=max(solve(p,l,n-l[i],s)+p[i],best);
    }
    cout<<best<<"+";
    check[n]=true;
    value[n]=best;
    return best;
}
int main(){
    lld n, price[8]={1,5,8,9,10,17,17,20},ln[8]={1,2,3,4,5,6,7,8},siz=8;
while(1){
    cin>>n;
    lld ans=solve(price,ln,n,siz);
    cout<<endl<<"ANS= "<<ans<<endl;
}
return 0;
}

