#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,i;
    string s;
    cin>>n>>s;
    for(i=0;i<s.length();i++){
        if('Z'-s[i]>=n){s[i]=s[i]+n;}
        else{s[i]=n-26+s[i];}
    }
    cout<<s<<endl;
    return 0;
}

