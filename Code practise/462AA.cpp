#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int x=0,i,t,j,m,n,o,p;
    char a[10000];
    cin>>t;
    for(i=0;i<t*t;i++){
        cin>>a[i];
    }
    for(i=0;i<t*t/2;i++){
        if(a[i]!=a[t*t-1-i]){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
