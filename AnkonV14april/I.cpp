#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n,i,j,a[100001],b[100001];
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a[i];
        b[a[i]]=i;
    }
    for(i=1;i<=n;i++){
        cout<<b[i]<<" ";
    }
    return 0;
}
