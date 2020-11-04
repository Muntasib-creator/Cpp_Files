#include<bits/stdc++.h>
#define lld long long int
#define T int t;cin>>t;for(;t!=0;t--)
using namespace std;
int main(){
    T{
        lld i,j,n,k,one=-1,preone=-1,x,sum=0,f1=0,f2=0;
        cin>>n>>k;
        preone=-k-1;
        string s;
        cin>>s;
        for(i=0;i<n;i++){
//            cin>>s;
            if(s[i]=='1'){
                if(f1==0){
                    f1=1;
                    sum=i/(k+1);
                    preone=i;
                }
                else{
                    one=i;
                    sum+=(one-preone)/(k+1)-1;   //cout<<"...."<<sum<<endl;
                    if(sum<0)sum=0;
                    preone=one;
                }
            }
            if(i==n-1){
                sum+=(i-preone)/(k+1);
            }
        }
//        cout<<"....";
        cout<<sum<<endl;
    }
    return 0;
}

//6
//6 1
//100010
//6 2
//000000
//5 1
//10101
//3 1
//001
//2 2
//00
//1 1
//0
