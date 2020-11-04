#include <bits/stdc++.h>
using namespace std;
long long int d(long long int x){
    int i;
    for(i=0;x!=0;i++){
        x=x/10;
    }
    return i;
}
int main(){
    long long int a,b,x,mx,mn,mid,s,ans=0;
    cin>>a>>b>>x;
    mx=1e9;mn=0;
    for(;mx>=mn;){
        mid=(mx+mn)/2;
        s=a*mid+b*d(mid);
        if(s==x){
            ans=mid;
            break;
        }
        else if(s<x){
            ans=mid;
            mn=mid+1;
        }
        else{
            mx=mid-1;
        }
    }
    ans=(ans>1e9)?1e9:ans;

    cout<<ans<<endl;
    return 0;
}
