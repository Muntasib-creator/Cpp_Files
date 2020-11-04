#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,sum=1,n,x;
    cin>>t;
    for(;t!=0;t--){
        sum=1;
        cin>>n;
        for(i=1;;i++){
            sum=sum+pow(2,i);   //cout<<"sum= "<<sum<<endl;
            if(n%sum==0){
                cout<<n/sum<<endl;
                break;
            }
        }
    }
    return 0;
}
