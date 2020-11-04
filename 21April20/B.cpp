#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,ev,od,t,n,a[200000];
    cin>>t;
    for(;t!=0;t--){
        cin>>n;
        if(n%4!=0){
            cout<<"NO"<<endl;
            continue;
        }
        else{
            cout<<"YES"<<endl;
            for(i=0,ev=2;i<n/2;ev=ev+2,i++){
                cout<<ev<<" ";
            }
            for(i=0,od=1;i<n/2-1;od=od+2,i++){
                cout<<od<<" ";
            }
            cout<<od+n/2<<endl;
        }
    }
    return 0;
}
