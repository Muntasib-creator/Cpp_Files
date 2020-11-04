#include<bits/stdc++.h>
#define lld long long int
#define T int t;cin>>t;for(;t!=0;t--)
using namespace std;
lld ar[10000];
bool check[10000];
lld num_way(lld n){
    lld a,i;
    if(n==1)return ar[1];
    if(n==2)return ar[2];
    if(!(check[n]))return ar[n];
    a=num_way(n-1)+num_way(n-2);
    ar[n]=a;
    check[n]=false;
    return a;
}
int main(){
    for(int j=0;j<10000;j++)ar[j]=0;
    ar[1]=1;ar[2]=2;
    lld n;
while(1){
    cin>>n;
    cout<<"ANS "<<num_way(n)<<endl;
}
return 0;
}
