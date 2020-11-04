#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,f,sign,i,n,x,mx,sum,signm;
    cin>>t;
    for(;t!=0;t--){
        f=0;sum=0;
        cin>>n;
        for(i=0;i<n;i++){
            cin>>x;
            if(i==0&&f==0){mx=x;signm=(mx>0);f=1;}
            sign=(x>0);
            if(sign==signm&&mx<x){mx=x;}
            else if(sign!=signm){
                sum+=mx;
                signm=sign;
                mx=x;
            }
        }
        sum+=mx;
        cout<<sum<<endl;
    }
    return 0;
}

