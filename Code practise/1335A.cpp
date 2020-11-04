#include<bits/stdc++.h>
#define lld long long int
#define T int t;cin>>t;for(;t!=0;t--)
using namespace std;
int main(){
    T{
        lld a,k,n,i,mn=9,mx=0,f=0;
        cin>>a>>k;
        for(;k!=1;k--){
            mn=9;mx=0;
            for(n=a,i=0;n!=0;n=n/10,i++){
                if(n%10==0){goto zero;}
                mx=max(n%10,mx);
                mn=min(n%10,mn);
            }
            a+=mn*mx;
        }
//        cout<<"......";
        zero:
        cout<<a<<endl;
    }
    return 0;
}
//9
//1 4
//487 1
//487 2
//487 3
//487 4
//487 5
//487 6
//487 7
//871634532970971855 2257402923097884
