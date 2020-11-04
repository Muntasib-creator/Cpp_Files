#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int d1,d2,a,b,x,i,j,t,f,s;
    cin>>a>>b>>x;
    d1=1;     //cout<<"d1="<<d1<<"   ";
    for(;;){
        t=(x-d1*b)/a;
        for(i=t,d2=0;i!=0;d2++){i=i/10;} //cout<<"d1="<<d1<<" d2="<<d2<<endl;
        if(d2>d1){
            d1++;
        }
        else{
            if(t>1000000000){t=1000000000;}
            cout<<t<<endl;
            return 0;
        }
    }
    return 0;
}

