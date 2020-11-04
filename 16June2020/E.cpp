#include<bits/stdc++.h>
#define lld long long int
#define T int t;cin>>t;for(;t!=0;t--)
using namespace std;
int main(){
    T{
        lld l,t,n,num=26,k,i,j,a[26],sum=0;
        for(i=97-97;i<=122-97;i++){
            a[i]=0;
        }
        cin>>n>>k;
        char c;
        for(j=0;j<n;j++){
            cin>>c;
            for(i=97;i<=122;i++){
                if(i==c){
                    a[i-97]++;
                    break;
                }
            }
        }
        for(i=0;i<num;i++){cout<<a[i]<<" ";}cout<<endl;
        sort(a,a+26);for(i=0;i<num;i++){cout<<a[i]<<" ";}cout<<endl;
        for(i=0;i<=25;i++){
            if(a[i]!=0){num=i;break;}
        }
        cout<<"num= "<<num<<endl;
        for(i=0;i<num;i++){cout<<a[i]<<" ";}cout<<endl;
//        for(i=1;i<=26-num;i++){
//            if(k%i==0){
//                t=i;
//            }
//        }
//        cout<<"t= "<<t<<endl;
        for(j=1, l=1;(l<=k&&l<=26-num);l++,j++){
            if(k%l==0){     cout<<"a[26-l]= "<<a[26-l]<<"(a[26-l]-a[26-l]%k)*j= "<<(a[26-l]-a[26-l]%k)*j<<endl;
                sum=max(sum,(a[26-l]-a[26-l]%k)*j);
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
