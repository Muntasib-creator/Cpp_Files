#include <bits/stdc++.h>
using namespace std;
int main(){
    int i,n,a[100],b[100],s=0;
    cin>>n;
    for(i=0;i<n-1;i++){
        cin>>b[i];
    }
    a[0]=b[0];
    s=a[0];
    for(i=0;i<n-1;i++){
        //if(i==0){a[i]=b[i];}
        if(i==n-2){
            a[i+1]=b[i];
            s=s+a[i+1];
            break;
        }

        a[i+1]=min(b[i],b[i+1]);
        s=s+a[i+1];
    }
    cout<<s;
    return 0;
}
