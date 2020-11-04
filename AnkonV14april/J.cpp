#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,n,i,j,sum=0;
    string s;
    cin>>n>>s;
    for(i=0;i<n;i++){
        for(j=i+1,x=0;s[i]==s[j];j++,x++){
        }
        i=i+x;sum++;
    }
    cout<<sum;
    return 0;
}

