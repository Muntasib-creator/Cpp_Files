#include<iostream>
#include<string.h>
using namespace std;
int main(){
    long long int t,f,a,sum,rs;
    string s;
    cin>>t;
    for(;t>0;t--){
        f=0;sum=0;rs=0;
        cin>>s;
//        cout<<s<<endl;
//        cout<<s.length();
        for(a=0;a<s.length();a++){
            if(s[a]=='1'){
                f=1;
                rs=sum;
            }
            else if(f==1){
                sum++;
            }
        }
//        cout<<",,,,,,,,,,,,,,,,,,,,,,,";
        cout<<rs<<endl;
    }
}

//
//0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
//1111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111
