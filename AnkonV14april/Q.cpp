#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,i,l;
    string s;
    cin>>n>>s;
    if(n%2==1){cout<<"No";return 0;}
    l=s.length();
    for(i=0;i<l/2;i++){
        if(s[i]!=s[i+l/2]){cout<<"No";return 0;}
    }
    cout<<"Yes";
    return 0;
}
