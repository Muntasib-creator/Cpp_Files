#include<bits/stdc++.h>
#define lld long long int
#define T int t;cin>>t;for(;t!=0;t--)
using namespace std;
int main(){
    T{
        lld i,j=1,n,x,ev=0,od=0,er=0;
        cin>>n;
        for(i=0;i<n;i++){
            cin>>x;
            if((i%2==0&&x%2==1)||(i%2==1&&x%2==0) ){er++;}
            if(x%2==0)ev++;
            else od++;
        }
        if((ev!=od&&n%2==0)||(ev-1!=od&&n%2==1)){
            cout<<-1<<endl;
        }
        else{
            cout<<er/2<<endl;
        }
    }
    return 0;
}

