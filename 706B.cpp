#include <bits/stdc++.h>
using namespace std;
#define lld long long int
int main(){
    lld i,n,q,d;
    vector <lld> v;
    cin>>n;
    for(;n!=0;n--) {
        cin>>i;
        v.push_back(i);
    }
    sort(v.begin(),v.end());
    cin>>q;
    for(;q!=0;q--){
        cin>>i;
        auto it= upper_bound(v.begin(),v.end(),i);
        d= it-v.begin();
//        d=(d==n)?n-1:d;
        cout<<d<<endl;
    }
    return 0;
}


