#include<bits/stdc++.h>
#define lld long long int
#define T int t;cin>>t;for(;t!=0;t--)
using namespace std;
int main(){
    T{
        lld n,mx=1000;
        cin>>n;
        vector<lld>s(n);
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        sort(s.begin(),s.end());
        for(int i=1;i<n;i++){
            mx=min(mx,s[i]-s[i-1]);
        }
        cout<<mx<<endl;
    }
    return 0;
}
