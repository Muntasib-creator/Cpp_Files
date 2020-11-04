#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b,n,i;
    cin>>n;
    for(i=1;i<10;i++){
        if(n%i==0&&n/i>0&&n/i<10){
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"No";
    return 0;
}

