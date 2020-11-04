#include<bits/stdc++.h>
#define lld long long int
#define T int t;cin>>t;for(;t!=0;t--)
using namespace std;
int main(){
    T{
    lld n,k,i,s=0;
    cin>>n>>k;
    vector<lld>a(n),b(n);
    for(i=0;i<n;i++)cin>>a[i];
    for(i=0;i<n;i++)cin>>b[i];
    sort(a.begin(),a.end());    //for(i=0;i<n;i++)cout<<"...."<<a[i]<<" ";cout<<endl;
    sort(b.begin(),b.end());    //for(i=0;i<n;i++)cout<<"...."<<b[i]<<" ";cout<<endl;

    for(i=0;i<n;i++){
        if(a[i]<b[n-1-i]&&k>0){s+=b[n-1-i];k--;}
        else{s+=a[i];}
    }
    cout<<s<<endl;
    }
    return 0;
}
