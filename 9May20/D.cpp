#include <bits/stdc++.h>
using namespace std;
#define T int t;cin>>t;for(;t!=0;t--)
#define lld long long int
int main(){
    lld n,i,j,sa,sb,ea,eb,m,a,b,A,B,suma,sumb,c,fa,fb;
    T{
        cin>>n;
        vector<lld>v(n);
        for(i=0;i<n;i++)cin>>v[i];
        a=v[0];b=0;
        A=v[0];B=0;
        sa=1;ea=n;
        sb=n-1;eb=0;
        c=1;
        for(;;){
            for(fb=0,b=0,sumb=0,i=sb;i>eb;i--){//cout<<":::::"<<endl;
                if(fb==0){c++;fb=1;}
                sumb+=v[i];
                B+=v[i];
                b+=v[i];
                if(sumb>a){
                    ea=i;
                    sb=i-1;
                    i--;
                    break;
                }
            }
            if(i==eb){
//                if(sumb<=a){c++;}
                cout<<c<<" "<<A<<" "<<B<<endl;break;
            }

            for(fa=0,a=0,suma=0,i=sa;i<ea;i++){  //cout<<"dddddddd"<<endl;
                if(fa==0){c++;fa=1;}
                suma+=v[i];
                A+=v[i];
                a+=v[i];
                if(suma>b){
                    eb=i;
                    sa=i+1;
                    i++;
                    break;

                }
            }
            if(i==ea){
//                if(suma<=b)c++;
                cout<<c<<" "<<A<<" "<<B<<endl;break;
            }

        }
    }
    return 0;
}
