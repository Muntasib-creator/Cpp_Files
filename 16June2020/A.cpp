#include<bits/stdc++.h>
#define lld long long int
#define T int t;cin>>t;for(;t!=0;t--)
using namespace std;
int main(){
    T{
        lld i,j=1,n;
        string s;
        char ans[100];
        cin>>s;
        n=s.size();                     //cout<<"asche  "<<n<<endl;
        ans[0]=s[0];    //cout<<"asche  "<<s[n-1]<<endl;

        for(i=1;i<n-1;i=i+2){
            ans[j++]=s[i];
        }//cout<<"ascheeee"<<endl;
        ans[j++]=s[n-1];
//        cout<<"j="<<j<<endl;
        for(i=0;i<j;i++){
            cout<<ans[i];
        }
        cout<<endl;
    }
    return 0;
}

