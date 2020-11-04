#include<bits/stdc++.h>
#define lld long long int
using namespace std;
int main(){
    lld i,j,n,m,mx=0,cnt=0,ar[10005],temp=0,siz;
    cin>>n>>m;
    string a[n];
    vector<lld>v(100);
    for(i=0;i<n;i++){cin>>a[i];}
//    for(i=0;i<n;i++){
//        for(j=0;j<m;j++){
//            cout<<a[i][j]<<"\t";
//        }
//    }
//    cout<<a[0]<<endl;
//    cout<<a[1]<<endl;
//    cout<<a[2]<<endl;
    for(j=0;j<m;j++){
        mx=0;
        for(i=0;i<n;i++){
            if(mx<a[i][j]){
                mx=a[i][j];
                cnt=temp;
                v[cnt]=i;     //printf("dhukse1  v[%lld]=%lld\n",cnt,v[cnt]);
                cnt++;
            }
            else if (mx==a[i][j]){
                v[cnt]=i;     //printf("dhukse2  v[%lld]=%lld\n",cnt,v[cnt]);
                cnt++;
            }
        }
        temp=cnt;
    }
    sort(v.begin(),v.begin()+cnt);
    v.resize(v.begin()+cnt-v.begin());
//    for(i=0;i<v.end()-v.begin();i++){cout<<"....."<<v[i]<<"  ";}
    auto it=unique(v.begin(),v.end());
    v.resize(it-v.begin());
    cout<<v.size()<<endl;
//    for(i=0;i<v.end()-v.begin();i++){cout<<"....."<<v[i]<<"  ";}
    return 0;
}


