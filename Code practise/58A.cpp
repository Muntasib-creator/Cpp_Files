#include<bits/stdc++.h>
#define lld long long int
#define T int t;cin>>t;for(;t!=0;t--)
using namespace std;
int main(){
    string in,right="hello";
    cin>>in;
    int i,j=0;
    for(i=0;i<in.length();i++){
        if(j==4&&right[j]==in[i]){
            cout<<"YES"<<endl;
            return 0;
        }
        if(right[j]==in[i]){
            j++;
        }

    }
    cout<<"NO"<<endl;
    return 0;
}
