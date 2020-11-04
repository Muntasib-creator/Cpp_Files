#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    double i;
    cin>>n;
    if(n%2==0){
        cout<<0.5<<endl;
    }
    else{
       i=(double)(n+1)/2/n;
       cout<<i<<endl;
    }

    return 0;
}

