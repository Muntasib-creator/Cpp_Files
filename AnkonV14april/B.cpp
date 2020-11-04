#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,i,j,n,a[20],b,c[20],f=0,s=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        cin>>b;
        s=s+b;
    }
    for(i=0;i<n-1;i++){
        cin>>c[i];
    }
    for(i=0;i<n-1;i++){
        if(a[i]==a[i+1]-1){s=s+c[a[i]-1];}    //cout<<c[a[i]]<<endl;
    }
    cout<<s<<endl;

    return 0;
}
