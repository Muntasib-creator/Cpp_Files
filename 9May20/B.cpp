#include <bits/stdc++.h>
using namespace std;
#define T int t;cin>>t;for(;t!=0;t--)
#define lld long long int
int main(){
    lld n,k,d,i,j,c,cnt;
    T{
        cin>>n>>k;
        if(n%2==1&&k%2==0){cout<<"NO"<<endl;}
        else if (k>n){cout<<"NO"<<endl;}
        else if (n%2==0&&k%2==1&&n/2<k){cout<<"NO"<<endl;}
        else if(n%2==0&&k%2==1){
            cout<<"YES"<<endl;
            for(i=0;i<k-1;i++){
                cout<<"2"<<" ";
            }
            cout<<n-2*(k-1)<<endl;
        }
        else{
            cout<<"YES"<<endl;
            for(i=0;i<k-1;i++){
                cout<<"1"<<" ";
            }
            cout<<n-k+1<<endl;
        }
    }
    return 0;
}

