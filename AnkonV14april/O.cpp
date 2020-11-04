#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n,i,j,d=1,ans;
    cin>>n;
    for(i=2;i<=(int)sqrt(n);i++){
        if(n%i==0){d=i;}
    }
    ans=d+n/d-2;
    cout<<ans<<endl;
    return 0;
}
