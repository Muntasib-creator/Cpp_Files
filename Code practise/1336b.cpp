#include<bits/stdc++.h>
#define lld long long int
using namespace std;
    long long int temp,a,diff,sq,x,ans,ans2,s,mn,mx,mid,tt,i,nr,ng,nb,t[2];

    vector<lld> :: iterator it;
void ttt(vector<lld>r,vector<lld>g,vector<lld>b);
int main(){

    cin>>tt;
    for(;tt!=0;tt--){
        cin>>nr>>ng>>nb;
        vector<lld>r(nr),g(ng),b(nb);
        int f=0;
        for(i=0;i<nr;i++){cin>>r[i];}
        for(i=0;i<ng;i++){cin>>g[i];}
        for(i=0;i<nb;i++){cin>>b[i];}
        sort(r.begin(),r.end());    //cout<<"------------";for(i=0;i<nr;i++){cout<<r[i]<<"\t";}cout<<endl;
        sort(g.begin(),g.end());   // cout<<"------------";for(i=0;i<ng;i++){cout<<g[i]<<"\t";}cout<<endl;
        sort(b.begin(),b.end());    //cout<<"------------";for(i=0;i<nb;i++){cout<<b[i]<<"\t";}cout<<endl;
        for(i=0;i<nr;i++){
            mn=0;mx=ng-1;x=r[i];ans=-1;
            if(binary_search(g.begin(),g.begin()+ng,x)){
                ans=g[ lower_bound(g.begin(),g.end(),x)-g.begin() ];        //cout<<"-----"<<ans<<endl;
            }
            else{
                mx= lower_bound(g.begin(),g.end(),x)-g.begin(); mn=mx-1;    //cout<<"-----"<<mx<<endl;
                if(mx==0) ans=g[0];
                else if (mx== ng) ans=g[ng-1];
                else if(g[mx]-x==x-g[mn]) {t[0]=g[mn];t[1]=g[mx];ttt(r,g,b);}
                else {ans=((g[mx]-x)<(x-g[mn]))?g[mx]:g[mn];}
            }
            mn=0;mx=nb-1;x=ans;ans2=-1;
            if(binary_search(b.begin(),b.begin()+nb,x)){
                ans2=b[ lower_bound(b.begin(),b.end(),x)-b.begin() ];        //cout<<"-----"<<ans<<endl;
            }
            else{
                mx= lower_bound(b.begin(),b.end(),x)-b.begin(); mn=mx-1;    //cout<<"-----"<<mx<<endl;
                if(mx==0) ans2=b[0];
                else if (mx== nb) ans2=b[nb-1];
                else {ans2=((b[mx]-x)<(x-b[mn]))?b[mx]:b[mn];}
            }

/*********************************************************************************************************************************/

            if(( ans2>=r[i]&&ans2<=ans )||( ans2<=r[i]&&ans2>=ans )){          //cout<<"Dhukse 1"<<endl;
                temp=(ans+r[i])/2;
                if(binary_search(b.begin(),b.end(),temp)){
                    ans2=b[ lower_bound(b.begin(),b.end(),temp)-b.begin() ];        //cout<<"-----"<<ans<<endl;
                }
                else{
                    mx= lower_bound(b.begin(),b.end(),temp)-b.begin(); mn=mx-1;    //cout<<"-----"<<mx<<endl;
                    if(mx==0) ans2=b[0];
                    else if (mx== nb) ans2=b[nb-1];
                    else {ans2=((b[mx]-temp)<(temp-b[mn]))?b[mx]:b[mn];}
                }
            }

            else if((ans2>=ans&&ans>=r[i])||(ans2<=ans&&ans<=r[i])){     //cout<<"Dhukse 2"<<endl;
                temp=(ans2+r[i])/2;
                if(binary_search(g.begin(),g.end(),temp)){
                    ans=g[ lower_bound(g.begin(),g.end(),temp)-g.begin() ];        //cout<<"-----"<<ans<<endl;
                }
                else{
                    mx= lower_bound(g.begin(),g.end(),temp)-g.begin(); mn=mx-1;    //cout<<"-----"<<mx<<endl;
                    if(mx==0) ans=g[0];
                    else if (mx== ng) ans=g[ng-1];
                    else {ans=((g[mx]-temp)<(temp-g[mn]))?g[mx]:g[mn];}
                }
            }

/***********************************************************************************************************************************/
            sq=(r[i]-ans)*(r[i]-ans)+(ans2-ans)*(ans2-ans)+(ans2-r[i])*(ans2-r[i]);       //cout<<"ans="<<ans<<"  ans2="<<ans2<<"  sq="<<sq<<endl;
            if(f==0){s=sq;f=1;}
            s=min(s,sq);                                //cout<<"Asche..3"<<endl;
        }
//        cout<<"......";
        cout<<s<<endl;
        r.clear();g.clear();b.clear();
    }

    return 0;
}

void ttt(vector<lld>r,vector<lld>g,vector<lld>b){
    if(t[0]>=b[nb-1]){
        ans=t[0];
    }
    else if(t[1]<=b[0]){
        ans=t[1];
    }
    else{
        lld mx1,mx2,dis1,dis2,ff=0;
        for(i=0;i<2;i++){
            x=t[i];
            if(binary_search(b.begin(),b.begin()+nb,x)){
                ans=t[i];        //cout<<"-----"<<ans<<endl;
                break;ff=1;
            }
        }

        if(ff==0){
            mx1= lower_bound(b.begin(),b.end(),t[0])-b.begin();     //cout<<"-----"<<mx<<endl;
            if(mx1==0) dis1=b[0]-t[0];
            else dis1=min(b[mx1]-t[0],t[0]-b[mx1-1]);

            mx2=lower_bound(b.begin(),b.end(),t[1])-b.begin();
            if(mx2==nb) dis2=t[1]-b[nb-1];
            else dis2=min(b[mx2]-t[1],t[1]-b[mx2-1]);

            ans=(dis1>dis2)?t[0]:t[1];
        }
    }
}
