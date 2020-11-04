#include <bits/stdc++.h>
using namespace std;
#define lld long long int
int main(){
    lld i,j,n,a,b,x,y;
    vector <lld> v;
    cin>>n;
    for(;n!=0;n--) {
        cin>>a>>b>>x>>y;
        i=(x>y)?y:x;
        j=(x>y)?x:y;
        cout<<(j-i)*a+i*b<<endl;
    }
    return 0;
}



