#include<bits/stdc++.h>
#define lld long long int
#define T int t;cin>>t;for(;t!=0;t--)
using namespace std;
lld num_way(lld n){
    lld a,i;
    if(n==1)return 1;
    if(n==2)return 2;
    a=num_way(n-1)+num_way(n-2);
    return a;
}
int main(){
    lld n;

//while(1){
    cin>>n;
    cout<<num_way(n)<<endl;
//}
return 0;
}
