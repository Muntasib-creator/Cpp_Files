#include<bits/stdc++.h>
using namespace std;
#define eps 1e-9
typedef  long long ll;

int dig(ll num){
    ll cnt=0;
    while(1){
        num=num/10;
        cnt++;
        if(num==0)break;
    }
    return cnt;
}


int main()
{
    ll a,b,x;cin>>a>>b>>x;
    ll aa=1,bb=1e9;
    ll mid;
    ll ans=0;
    while(bb-aa>1){
        mid=(aa+bb)/2;
        ll tmp=a*mid+b*dig(mid);
        if(tmp<=x){
            aa=mid+1;
            ans=max(ans,mid);
        }
        else {
            bb=mid-1;
        }

    }
    if(a*aa+b*dig(aa)<=x)ans=max(ans,aa);
    if(a*bb+b*dig(bb)<=x)ans=max(ans,bb);
    cout<<ans<<endl;

}
