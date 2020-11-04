#include<bits/stdc++.h>
#define lld long long int
#define T int t;cin>>t;for(;t!=0;t--)
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector <int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());

    int prei=0,od=0,cn=1;
    for(int i=0;i<n;i++){
        if(i==0)prei=0;
        else if(a[i]==prei)cn++;
        else {od+=cn%2;cn=1;}
        if (i==n-1)od+=cn%2;
        prei=a[i];
    }
    if(n%2==1)cout<<n-(od-1)/2;
    else cout<<n-od/2;

    return 0;
}
