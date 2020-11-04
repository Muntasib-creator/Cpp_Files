#include<bits/stdc++.h>
#define lld long long int
#define T int t;cin>>t;for(;t!=0;t--)
using namespace std;
int main(){
    T{

        lld n,i,j,f=0;
        cin>>n;
        string s[n];
        for(j=0;j<n;j++){
            cin>>s[j];
        }
//        for(i=0;i<n;i++){
//            for(j=0;j<n;j++)
//                cout<<s[i][j]<<" ";
//            cout<<endl;
//        }

        for(i=0;i<n-1;i++){
            for(j=0;j<n-1;j++){
                if( s[i][j]=='1'&& (s[i+1][j]=='0'&&s[i][j+1]=='0') ){
                    cout<<"NO"<<endl;
                    goto go;
                }
            }
        }
        cout<<"YES"<<endl;
        go:;
    }
    return 0;
}
