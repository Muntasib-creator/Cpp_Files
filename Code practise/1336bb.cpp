#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int diff,sq,x,ans,ans2,s,mn,mx,mid,t,i,nr,ng,nb;
    cin>>t;
    for(;t!=0;t--){
        cin>>nr>>ng>>nb;
        int r[nr],g[ng],b[nb],f=0;
        for(i=0;i<nr;i++){cin>>r[i];}
        for(i=0;i<ng;i++){cin>>g[i];}
        for(i=0;i<nb;i++){cin>>b[i];}
        sort(r,r+nr);sort(g,g+ng);sort(b,b+nb);
        for(i=0;i<nr;i++){
            mn=0;mx=ng-1;x=r[i];ans=-1;
            while(mx-mn>1){                                    //cout<<"Asche..1"<<endl;
                mid=(mx+mn)/2;
                if(g[mid]==x){ans=x;break;}
                else if(g[mid]>x){mx=mid;}
                else{mn=mid;}
            }
            if(ans==-1){ans=((g[mx]-x)<(x-g[mn]))?g[mx]:g[mn];}

            mn=0;mx=nb-1;x=ans;ans2=-1;
            while(mx-mn>1){
                mid=(mx+mn)/2;
                if(b[mid]==x){ans2=x;break;}
                else if(b[mid]>x){mx=mid;}
                else{mn=mid;}
            }
            if(ans2==-1){ans2=((b[mx]-x)<(x-b[mn]))?b[mx]:b[mn];}      //cout<<"Asche..2"<<endl;
            sq=(r[i]-ans)*(r[i]-ans)+(ans2-ans)*(ans2-ans)+(ans2-r[i])*(ans2-r[i]);       //cout<<"ans="<<ans<<"  ans2="<<ans2<<"  sq="<<sq<<endl;
            if(f==0){s=sq;f=1;}
            s=min(s,sq);                                //cout<<"Asche..3"<<endl;
        }
        cout<<s<<endl;
    }
//    s=2;
//    cout<<"........"<<s;
    return 0;
}
