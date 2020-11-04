#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int i,j,d[50],n,s=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>d[i];
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            s=s+d[i]*d[j];
        }
    }
    cout<<s;
    return 0;
}

