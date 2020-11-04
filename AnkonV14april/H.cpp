#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,h,s=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>h;
        if(h>=k){s++;}
    }
    cout<<s;
    return 0;
}

