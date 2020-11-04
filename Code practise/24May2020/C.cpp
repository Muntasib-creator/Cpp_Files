#include<bits/stdc++.h>
#define lld long long int
#define T int t;cin>>t;for(;t!=0;t--)
using namespace std;
int main(){
    T{
        lld n,mx=1000,ev=0,od=0,one=0;
        cin>>n;
        vector<lld>s(n);
        for(int i=0;i<n;i++){
            cin>>s[i];
            if(s[i]%2==0)ev++;
            else od++;
        }
        sort(s.begin(),s.end());
        for(int i=1;i<n;i++){
            if(s[i]-s[i-1]==1){one=1;break;}
        }
        if(ev%2==0&&od%2==0)
            cout<<"YES"<<endl;
        else if(one==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
