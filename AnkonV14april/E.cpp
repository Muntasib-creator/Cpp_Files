#include <bits/stdc++.h>
using namespace std;

int main(){
    int i;
    string s;
    cin>>s;
    for(i=0;i<s.length();i++){
        if(i%2==0&&s[i]=='L'){
            cout<<"No"<<endl;
            return 0;
        }
        else if(i%2==1&&s[i]=='R'){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;

    return 0;
}

