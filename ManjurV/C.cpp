#include<bits/stdc++.h>
#define lld long long int
#define T int t;cin>>t;for(;t!=0;t--)
using namespace std;
int main(){T{
        lld i,s=0,n=1e18,lo=1,hi=1414213562,mid,f=0;
        cin>>n;
        if(n==0){
            cout<<0<<endl;
            continue;

        }
        while (lo<=hi){
            mid=(lo+hi)/2;
            s=mid*(mid+1)/2;
            if(s==n){               //cout<<"lo= "<<lo<<" mid= "<<mid<<" hi= "<<hi<<endl;
                cout
                //<<"...."
                <<mid<<endl;
                break;
            }
            else if(s>n){           //cout<<"lo= "<<lo<<" mid= "<<mid<<" hi= "<<hi<<endl;
                hi=mid;
                f=1;
            }
            else{                   //cout<<"lo= "<<lo<<" mid= "<<mid<<" hi= "<<hi<<endl;
                lo=mid;
                f=0;
            }
            if(lo==hi-1){       //cout<<"lo= "<<lo<<" mid= "<<mid<<" hi= "<<hi<<endl;
                cout
                //<<"...."
                <<lo<<endl;
                break;
            }
        }
    }
    return 0;
}

