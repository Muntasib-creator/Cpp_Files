#include <bits/stdc++.h>
using namespace std;
#define T int t;cin>>t;for(;t!=0;t--)
#define lld long long int
//int main(){
//    lld n,k,a,b;
//    T{
//        cin>>n>>k;
//        a=k/(n-1);
//        b=k%(n-1);
//        if(b==0)cout<<a*n-1<<endl;
//        else cout<<a*n+b<<endl;
//    }
//    return 0;
//}

int main(){

    lld low=1,high=1000000000000;
    lld mid, pos,n,k;
    cin>>n>>k;
    while(1){
        mid=(high+low)/2;
        if(pos==k){
            break;
        }
        else if(pos>k){
            mid=low-1;
        }
        else{
            mid=high+1;
        }
    }
    cout<<pos<<endl;
}
